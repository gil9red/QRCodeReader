#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDropEvent>
#include <QDragEnterEvent>
#include <QEvent>

namespace Ui {
    class MainWindow;
}

#include "QZXing.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QZXing zxing;
    QPoint lastPos;

public slots:
    void open();
    void decode();

protected:
    void dragEnterEvent( QDragEnterEvent * event );
    void dropEvent( QDropEvent * event );
    bool eventFilter( QObject * object, QEvent * event );
};

#endif // MAINWINDOW_H
