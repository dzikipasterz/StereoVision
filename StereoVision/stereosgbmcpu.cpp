#include "stereosgbmcpu.h"

StereoSGBMcpu::StereoSGBMcpu() :
    numOfDisparities(32),
    sgbmWinSize(13)
{
    leftMatcher = cv::StereoSGBM::create(0, numOfDisparities, sgbmWinSize);

    leftMatcher->setP1(8*sgbmWinSize*sgbmWinSize);
    leftMatcher->setP2(32*sgbmWinSize*sgbmWinSize);
    leftMatcher->setNumDisparities(numOfDisparities);
    leftMatcher->setPreFilterCap(31);
    leftMatcher->setMode(cv::StereoSGBM::MODE_SGBM_3WAY);
    leftMatcher->setSpeckleWindowSize(100);
    leftMatcher->setUniquenessRatio(10);
    leftMatcher->setSpeckleRange(32);
    leftMatcher->setDisp12MaxDiff(1);

    /*
    filter = cv::ximgproc::createDisparityWLSFilter(leftMatcher);
    filter->setLambda(8000.0);
    filter->setSigmaColor(1.0);
    rightMatcher = cv::ximgproc::createRightMatcher(leftMatcher);
*/
}

void StereoSGBMcpu::processFrames(cv::Mat leftFrameRaw, cv::Mat rightFrameRaw, cv::Mat leftFrameRectified, cv::Mat rightFrameRectified)
{   
    leftMatcher->compute(leftFrameRectified, rightFrameRectified, leftDisp);
    leftDisp.convertTo(filteredDispVis, CV_8U, 255/(numOfDisparities*16.));
    //rightMatcher->compute(rightFrameRectified, leftFrameRectified, rightDisp);
    //filter->filter(leftDisp, leftFrameRectified, filteredDisp, rightDisp);
    //cv::ximgproc::getDisparityVis(filteredDisp, filteredDispVis);

    emit sendDisparity(leftFrameRectified, rightFrameRectified, leftDisp);
}
