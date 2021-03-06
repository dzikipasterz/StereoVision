#ifndef PICTURETAKER_H
#define PICTURETAKER_H

#include <QObject>
#include <QDateTime>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

class PictureTaker : public QObject
{
    Q_OBJECT
public:
    explicit PictureTaker(QString path = "/home/");

signals:
    void sendImagesPaths(QString leftPath, QString rightPath);

public slots:
    void receiveTakePicture();
    void receiveFrames(cv::Mat leftFrame, cv::Mat rightFrame);

private:
    bool takePictureFlag;
    QString savePath;

};

#endif // PICTURETAKER_H
