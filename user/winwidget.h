#ifndef WINWIDGET_H
#define WINWIDGET_H

#include<QtOpenGLWidgets/QOpenGLWidget>
#include<qpainter.h>

class WinWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    // WinWidget(QWidget* parent = Q_NULLPTR);
    // ~WinWidget();
    void paintEvent(QPaintEvent* event) ;
    void timerEvent(QTimerEvent* event);//定时器
private:
    QImage m_img;
};

#endif // WINWIDGET_H
