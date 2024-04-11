#include "MoviePipelineCameraSetting.h"

UMoviePipelineCameraSetting::UMoviePipelineCameraSetting() {
    this->ShutterTiming = EMoviePipelineShutterTiming::FrameCenter;
    this->OverscanPercentage = 0.00f;
    this->bRenderAllCameras = false;
}


