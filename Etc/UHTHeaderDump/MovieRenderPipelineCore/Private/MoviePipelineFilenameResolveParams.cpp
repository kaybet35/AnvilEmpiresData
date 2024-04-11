#include "MoviePipelineFilenameResolveParams.h"

FMoviePipelineFilenameResolveParams::FMoviePipelineFilenameResolveParams() {
    this->FrameNumber = 0;
    this->FrameNumberShot = 0;
    this->FrameNumberRel = 0;
    this->FrameNumberShotRel = 0;
    this->ZeroPadFrameNumberCount = 0;
    this->bForceRelativeFrameNumbers = false;
    this->InitializationVersion = 0;
    this->Job = NULL;
    this->ShotOverride = NULL;
    this->AdditionalFrameNumberOffset = 0;
}

