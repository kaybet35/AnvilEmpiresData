#include "MoviePipelineCommandLineEncoder.h"

UMoviePipelineCommandLineEncoder::UMoviePipelineCommandLineEncoder() {
    this->Quality = EMoviePipelineEncodeQuality::Epic;
    this->bDeleteSourceFiles = false;
    this->bSkipEncodeOnRenderCanceled = true;
    this->bWriteEachFrameDuration = true;
}


