#ifndef APPWIDGET_H
#define APPWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QThread>
#include <QTimer>
#include <appsettings.h>
#include "timerregulator.h"
#include "stereocamera.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


class AppWidget : public QWidget
{
    Q_OBJECT

public:
    AppWidget(QWidget *parent = nullptr);
    ~AppWidget();

protected:
    AppSettings settings;
    QTimer * timer;
    timerRegulator * intervalRegulator;
    stereoCamera * camera;
    void displayFrame(cv::Mat frame, QLabel * display);
    void startup();
    void initTimer(const int timerInterval = 42);
    void startTimer();
    void initCamera(const int leftCameraId = 0, const int rightCameraId = 1);
    void startCamera();

private:
    QThread * threadStereoCamera;
    QThread * threadTimer;
};

#endif // APPWIDGET_H