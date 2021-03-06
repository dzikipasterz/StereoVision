#include "stereobpcuda.h"

StereoBPcuda::StereoBPcuda()
{
    cv::cuda::StereoBeliefPropagation::estimateRecommendedParams(640, 480, ndisp, iters, levels);
    stereoBP = cv::cuda::createStereoBeliefPropagation(ndisp, iters, levels);
    filter = cv::cuda::createDisparityBilateralFilter();
    filter->setNumDisparities(ndisp);
    filter->setEdgeThreshold(10.0);
    filter->setSigmaRange(0.25);
    filter->setRadius(11);
}

void StereoBPcuda::process(cv::Mat leftFrameRectified, cv::Mat rightFrameRectified)
{
    leftFrameGpu.upload(leftFrameRectified);
    rightFrameGpu.upload(rightFrameRectified);

    stereoBP->compute(leftFrameGpu, rightFrameGpu, dispGpuOut);
    filter->apply(dispGpuOut,leftFrameGpu, dispGpuOut);

    dispGpuOut.download(dispOut);
    dispOut.convertTo(dispOut, CV_8UC1);
}
