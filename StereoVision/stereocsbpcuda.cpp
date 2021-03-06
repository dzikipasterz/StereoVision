#include "stereocsbpcuda.h"

StereoCSBPcuda::StereoCSBPcuda()
{
    cv::cuda::StereoConstantSpaceBP::estimateRecommendedParams(640, 480, ndisp, iters, levels, nrPlane);
    stereoCSBP = cv::cuda::createStereoConstantSpaceBP(ndisp, iters, levels, nrPlane);
    filter = cv::cuda::createDisparityBilateralFilter();
    filter->setNumDisparities(ndisp);
    filter->setEdgeThreshold(10.0);
    filter->setSigmaRange(0.25);
    filter->setRadius(11);
}



void StereoCSBPcuda::process(cv::Mat leftFrameRectified, cv::Mat rightFrameRectified)
{
    leftFrameGpu.upload(leftFrameRectified);
    rightFrameGpu.upload(rightFrameRectified);

    stereoCSBP->compute(leftFrameGpu, rightFrameGpu, dispGpu);
    filter->apply(dispGpu,leftFrameGpu, dispGpuOut);

    dispGpuOut.download(dispOut);
    dispOut.convertTo(dispOut, CV_8UC1);
}
