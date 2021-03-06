#ifndef STEREOSGBM_H
#define STEREOSGBM_H

#include <QObject>
#include <stereomatcher.h>

class StereoSGBMcpu : public StereoMatcher
{
public:
    StereoSGBMcpu();

protected:
    void process(cv::Mat leftFrameRectified, cv::Mat rightFrameRectified) override;

private:
    cv::Ptr<cv::StereoSGBM> leftMatcher;
    cv::Ptr<cv::StereoMatcher> rightMatcher;
    cv::Ptr<cv::ximgproc::DisparityWLSFilter> filter;
    cv::Mat leftDisp, rightDisp, filteredDisp;
    int numOfDisparities;
    int winSize;
};

#endif // STEREOSGBM_H
