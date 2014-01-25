#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QImageReader>
#include <QMimeData>
#include <QFileInfo>
#include <QUrl>
#include <QMouseEvent>

/// PUBLIC
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( ui->actionOpen, SIGNAL( triggered() ), SLOT( open() ) );
    connect( ui->actionQuit, SIGNAL( triggered() ), qApp, SLOT( quit() ) );

    // Расшифровываем qr коды
    zxing.setDecoder( QZXing::DecoderFormat_QR_CODE );

    ui->splitter->setSizes( QList < int > () << ui->labelQRCodeImage->maximumWidth() );

    ui->scrollArea->installEventFilter( this );
}

MainWindow::~MainWindow()
{
    delete ui;
}

/// PUBLIC SLOTS
void MainWindow::open()
{
    QString filter;
    filter += "Файлы изображений (";

    foreach ( const QByteArray & format , QImageReader::supportedImageFormats() )
        filter += " *." + format;

    filter += " )";

    QString path = QFileDialog::getOpenFileName( this,
                                                 QString(),
                                                 QString(),
                                                 filter );

    if ( path.isEmpty() )
        return;

    ui->labelQRCodeImage->setPixmap( QPixmap( path ) );

    decode();
}
void MainWindow::decode()
{
    const QImage & qrImage = ui->labelQRCodeImage->pixmap()->toImage();
    const QString & decodeText = zxing.decodeImage( qrImage );   

    ui->pTextEditQRCodeText->setPlainText( decodeText );
    ui->labelSizeText->setText( QString::number( decodeText.size() ) );
}

/// PROTECTED
void MainWindow::dragEnterEvent( QDragEnterEvent * event )
{
    const QMimeData * mime = event->mimeData();
    const QList < QUrl > & urls = mime->urls();

    // С QString удобнее работать, чем с QByteArray
    QStringList formats;
    foreach ( const QByteArray & format, QImageReader::supportedImageFormats() )
        formats += format;

    // Будем принимать только один файл и то читабельного формата
    if ( urls.size() == 1 )
    {
        const QString & path = urls.first().toLocalFile();
        const QString & suffix = QFileInfo( path ).suffix();

        // если формат принимаемого файла есть в списке
        if( formats.contains( suffix, Qt::CaseInsensitive ) )
            event->acceptProposedAction();
    }
}
void MainWindow::dropEvent( QDropEvent * event )
{
    const QMimeData * mime = event->mimeData();
    const QList < QUrl > & urls = mime->urls();

    QString path = urls.first().toLocalFile();

    ui->labelQRCodeImage->setPixmap( QPixmap( path ) );

    decode();
}

bool MainWindow::eventFilter( QObject * object, QEvent * event )
{
    QScrollArea * scrollArea = ui->scrollArea;

    if ( object == scrollArea )
    {
        if ( event->type() == QEvent::MouseButtonPress )
        {
            QMouseEvent * mouseEvent = static_cast < QMouseEvent * > ( event );
            if ( mouseEvent->button() == Qt::LeftButton )
            {
                lastPos = mouseEvent->pos();

                if( scrollArea->horizontalScrollBar()->isVisible()
                        || scrollArea->verticalScrollBar()->isVisible() )
                    scrollArea->setCursor( Qt::ClosedHandCursor );
                else
                    scrollArea->setCursor( Qt::ArrowCursor );
            }

        }else if ( event->type() == QEvent::MouseMove )
        {
            QMouseEvent *mouseEvent = static_cast < QMouseEvent * > ( event );

            if ( mouseEvent->buttons() == Qt::LeftButton )
            {
                lastPos -= mouseEvent->pos();

                int hValue = scrollArea->horizontalScrollBar()->value();
                int vValue = scrollArea->verticalScrollBar()->value();

                scrollArea->horizontalScrollBar()->setValue( lastPos.x() + hValue );
                scrollArea->verticalScrollBar()->setValue( lastPos.y() + vValue );

                lastPos = mouseEvent->pos();
            }

        }else if ( event->type() == QEvent::MouseButtonRelease )
            scrollArea->setCursor( Qt::ArrowCursor );
    }

    return QWidget::eventFilter(object, event);
}
