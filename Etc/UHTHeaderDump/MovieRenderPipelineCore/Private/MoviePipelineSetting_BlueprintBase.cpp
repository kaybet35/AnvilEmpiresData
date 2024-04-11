#include "MoviePipelineSetting_BlueprintBase.h"

UMoviePipelineSetting_BlueprintBase::UMoviePipelineSetting_BlueprintBase() {
    this->CategoryText = FText::FromString(TEXT("Custom Settings"));
    this->bIsValidOnMaster = true;
    this->bIsValidOnShots = true;
    this->bCanBeDisabled = true;
}



FMoviePipelineFormatArgs UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments_Implementation(FMoviePipelineFormatArgs& InOutFormatArgs) const {
    return FMoviePipelineFormatArgs{};
}



