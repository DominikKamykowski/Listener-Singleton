#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "listener.h"
#include "secondlistener.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public EventListener
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SecondListener *secondListener;
    void echo(std::string);
};
#endif // MAINWINDOW_H
