#include "MoviePipelineSegmentWorkMetrics.h"

FMoviePipelineSegmentWorkMetrics::FMoviePipelineSegmentWorkMetrics() {
    this->OutputFrameIndex = 0;
    this->TotalOutputFrameCount = 0;
    this->OutputSubSampleIndex = 0;
    this->TotalSubSampleCount = 0;
    this->EngineWarmUpFrameIndex = 0;
    this->TotalEngineWarmUpFrameCount = 0;
}

