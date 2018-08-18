#ifndef WIDGETSETTINGS_H
#define WIDGETSETTINGS_H

#include <QWidget>
#include <QLabel>
#include <QThread>
#include <QTimer>
#include <QPicture>
#include <QFileDialog>
#include "appwidget.h"

namespace Ui {
class widgetSettings;
}

class widgetSettings : public AppWidget
{
    Q_OBJECT

public:
    explicit widgetSettings(AppSettings sett);
    ~widgetSettings();

signals:
    void sendStereoCameraSetup(const int leftCameraId, const int rightCameraId);
    void sendSettingsChanged(AppSettings sett);

public slots:
    void receiveFrames(cv::Mat leftFrame, cv::Mat rightFrame);
    void receiveCameraStatus(bool leftCameraStatus, bool rightCameraStatus);

private slots:
    void on_leftCameraId_valueChanged(int arg1);
    void on_rightCameraId_valueChanged(int arg1);

    void on_pushButtonSelectDirectory_clicked();

    void on_pushButtonSelectCalibFile_clicked();

protected:
    void startup();

private:
    Ui::widgetSettings *ui;
    void displayCameraStatus(bool status, QLabel * labelStatus);
};

#endif // WIDGETSETTINGS_H
