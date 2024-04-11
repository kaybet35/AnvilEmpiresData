#include "MoviePipelineOutputSetting.h"

UMoviePipelineOutputSetting::UMoviePipelineOutputSetting() {
    this->FileNameFormat = TEXT("{sequence_name}.{frame_number}");
    this->bUseCustomFrameRate = false;
    this->bOverrideExistingOutput = true;
    this->HandleFrameCount = 0;
    this->OutputFrameStep = 1;
    this->bUseCustomPlaybackRange = false;
    this->CustomStartFrame = 0;
    this->CustomEndFrame = 0;
    this->VersionNumber = 1;
    this->bAutoVersion = true;
    this->ZeroPadFrameNumbers = 4;
    this->FrameNumberOffset = 0;
    this->bFlushDiskWritesPerShot = false;
}


