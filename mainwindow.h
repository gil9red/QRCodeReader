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

class MainWindow: public QMainWindow
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

private slots:
    void on_pButtonOpen_clicked();
    void on_pButtonQuit_clicked();

protected:
    void dragEnterEvent( QDragEnterEvent * event );
    void dropEvent( QDropEvent * event );
    bool eventFilter( QObject * object, QEvent * event );
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
