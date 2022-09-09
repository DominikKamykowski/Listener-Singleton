#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listener.h"
#include <QDebug>
#include "secondlistener.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Listener::Create();

    secondListener = new SecondListener();

    Listener::getInstance()->addEventListener(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::echo(std::string text)
{
    qDebug() << Q_FUNC_INFO << text.c_str();
}


void MainWindow::on_pushButton_clicked()
{
    Listener::getInstance()->buttonPressed();

}

