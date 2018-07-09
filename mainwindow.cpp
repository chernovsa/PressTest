#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject* o, QEvent* e) {

    if ( o==ui->pushButton)
  {
     if ( e->type() == QEvent::MouseButtonPress )
    qDebug()<<"PRESS EVENT";
     if( e->type() == QEvent::MouseButtonRelease)
         qDebug()<<"RELEASE EVENT";

  }
  return QMainWindow::eventFilter(o, e);
}
