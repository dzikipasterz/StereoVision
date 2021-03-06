#include "imagereader.h"

ImageReader::ImageReader()
{

}


void ImageReader::executeStart()
{
    cv::Mat leftFrame, leftGray, rightFrame, rightGray;
    leftFrame = cv::imread(leftSourcePath.toUtf8().constData());
    rightFrame = cv::imread(rightSourcePath.toUtf8().constData());
    cv::cvtColor(leftFrame, leftGray, CV_BGR2GRAY);
    cv::cvtColor(rightFrame, rightGray, CV_BGR2GRAY);

    emit sendFrames(leftGray, rightGray);
}
