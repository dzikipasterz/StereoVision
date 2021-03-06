#include "videowriter.h"

VideoWriter::VideoWriter(QString path) :
    leftCap(nullptr),
    rightCap(nullptr),
    recordFlag(false)
{
    savePath = path;

}

VideoWriter::~VideoWriter()
{
    releaseWriter();
}

void VideoWriter::receiveStartRecording()
{
    recordFlag = true;

    QDateTime currentTime = QDateTime::currentDateTime();
    QString L = ((currentTime.toString("yyyyMMdd_hhmmss")).append("_L.avi").prepend(savePath));
    QString R = ((currentTime.toString("yyyyMMdd_hhmmss")).append("_R.avi").prepend(savePath));

    leftCap = new cv::VideoWriter();
    rightCap = new cv::VideoWriter();
    leftCap->open(L.toUtf8().constData(), CV_FOURCC( 'D','I','V','X'), 24.0, frameSize, true);
    rightCap->open(R.toUtf8().constData(), CV_FOURCC( 'D','I','V','X'), 24.0, frameSize, true);
    emit sendMovFilesPaths(L, R);
}

void VideoWriter::receiveStopRecording()
{
    recordFlag = false;
    releaseWriter();
}

void VideoWriter::receiveFrames(cv::Mat leftFrame, cv::Mat rightFrame)
{
    if(recordFlag && leftCap->isOpened() && rightCap->isOpened())
    {
        leftCap->write(leftFrame);
        rightCap->write(rightFrame);

    }
    else frameSize = leftFrame.size();

    leftFrame.release();
    rightFrame.release();
}


void VideoWriter::releaseWriter()
{
    if(leftCap != nullptr) leftCap->release();
    if(rightCap != nullptr) rightCap->release();
}
