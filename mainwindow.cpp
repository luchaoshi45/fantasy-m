#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    windowHandle = sd->GetWorkerW();
    paint_widget = new PaintWidget();
    paint_widget->show();
    SetParent((HWND)paint_widget->winId(), windowHandle);
    //将视频句柄附加到桌面句柄上

}

MainWindow::~MainWindow()
{
    delete ui;
}
