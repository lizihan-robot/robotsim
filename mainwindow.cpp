#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <qstring.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),

{
    ui->setupUi(this);
    j1_value_ = j2_value_ = j3_value_ = j4_value_ = j5_value_ = j6_value_ = 0;
    QObject::connect(btnClose, SIGNAL(clicked()), alert, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plus_j1_clicked()
{
    j1_value_ += 0.1;
}
