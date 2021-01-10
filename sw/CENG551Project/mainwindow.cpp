/*
 * CannyEdgeDetecor: Software for edge detection
 *
 * BLG 513E Image Processing HW#1
 *
 * Copyright (C)  Mehmet AKTAS 0504181576
 *
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e);

    int nextIndex = ui->stackedWidget->currentIndex() + 1;
    if(nextIndex >= ui->stackedWidget->count())
    {
        nextIndex = 0;
    }

    ui->stackedWidget->setCurrentIndex(nextIndex);
}
