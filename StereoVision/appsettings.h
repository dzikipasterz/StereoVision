#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QString>

class AppSettings
{
public:
    AppSettings();
    ~AppSettings();

    void setLeftCameraId(int cameraId);
    int readLeftCameraId();
    void setRightCameraId(int cameraId);
    int readRightCameraId();
    void setCalibPictsSavePath(QString path);
    QString readCalibPictSavePath();
    void setCalibFilesDir(QString path);
    QString readCalibFilesDir();
    void setCalibFilePath(QString path);
    QString readCalibFilePath();
    void setMovFilesDir(QString path);
    QString readMovFilesDir();

private:
    int leftCameraId;
    int rightCameraId;
    QString calibPictsSavePath;
    QString calibFilesDir;
    QString calibFilePath;
    QString movFilesDir;

    void readConfigFile();
    void writeConfigFile();
};

#endif // APPSETTINGS_H
