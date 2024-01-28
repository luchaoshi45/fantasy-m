#include "paintwidget.h"
#include "ui_paintwidget.h"
#include <QScreen>

PaintWidget::PaintWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PaintWidget)
{
    ui->setupUi(this);
    //获取设备屏幕大小
    QRect deskRect = QGuiApplication::primaryScreen()->geometry();
    this->setGeometry(deskRect);
    ui->openGLWidget->setGeometry(deskRect);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

PaintWidget::~PaintWidget()
{
    delete ui;
}
