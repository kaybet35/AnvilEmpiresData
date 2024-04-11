#include "MoviePipelineAntiAliasingSetting.h"

UMoviePipelineAntiAliasingSetting::UMoviePipelineAntiAliasingSetting() {
    this->SpatialSampleCount = 1;
    this->TemporalSampleCount = 1;
    this->bOverrideAntiAliasing = false;
    this->AntiAliasingMethod = AAM_None;
    this->RenderWarmUpCount = 32;
    this->bUseCameraCutForWarmUp = false;
    this->EngineWarmUpCount = 0;
    this->bRenderWarmUpFrames = false;
}


