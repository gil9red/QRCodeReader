/*************************************************************************
**
** Copyright (C) 2014-2014 by Ilya Petrash
** All rights reserved.
** Contact: gil9red@gmail.com, ip1992@inbox.ru
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the
** Free Software Foundation, Inc.,
** 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
**
**************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QImageReader>
#include <QMimeData>
#include <QFileInfo>
#include <QUrl>
#include <QMouseEvent>
#include <QSettings>
#include <QScrollBar>

const QString getFilter()
{
    static QString filter;
    filter += "Images (";
    foreach ( const QByteArray & format, QImageReader::supportedImageFormats() )
        filter += " *." + format;
    filter += " )";

    return filter;
}
const QString getIniPath()
{
    const static QString iniPath( qApp->applicationDirPath() + "/settings.ini" );
    return iniPath;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->scrollArea->installEventFilter( this );

    connect( ui->actionOpen, SIGNAL( triggered() ), SLOT( open() ) );
    connect( ui->actionQuit, SIGNAL( triggered() ), SLOT( close() ) );

    // Расшифровываем qr коды
    zxing.setDecoder( QZXing::DecoderFormat_QR_CODE );

    QSettings ini( getIniPath(), QSettings::IniFormat );
    ui->splitter->restoreState( ini.value( ui->splitter->objectName() ).toByteArray() );
    restoreState( ini.value( "State" ).toByteArray() );
    restoreGeometry( ini.value( "Geometry" ).toByteArray() );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    QString path = QFileDialog::getOpenFileName( this, QString::null, QString::null, getFilter() );
    if ( path.isEmpty() )
        return;

    ui->labelQRCodeImage->setPixmap( QPixmap( path ) );
    decode();
}
void MainWindow::decode()
{
    QImage qrImage = ui->labelQRCodeImage->pixmap()->toImage();
    const QString & decodeText = zxing.decodeImage( qrImage );

    ui->pTextEditQRCodeText->setPlainText( decodeText );
    ui->labelSizeText->setText( QString::number( decodeText.size() ) );
}

void MainWindow::on_pButtonOpen_clicked()
{
    open();
}
void MainWindow::on_pButtonQuit_clicked()
{
    close();
}


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

                if( scrollArea->horizontalScrollBar()->isVisible() || scrollArea->verticalScrollBar()->isVisible() )
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
void MainWindow::closeEvent(QCloseEvent *)
{
    QSettings ini( getIniPath(), QSettings::IniFormat );
    ini.setValue( ui->splitter->objectName(), ui->splitter->saveState() );
    ini.setValue( "State", saveState() );
    ini.setValue( "Geometry", saveGeometry() );

    qApp->quit();
}
