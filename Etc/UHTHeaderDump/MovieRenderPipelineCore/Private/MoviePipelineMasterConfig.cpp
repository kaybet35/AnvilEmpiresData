#include "MoviePipelineMasterConfig.h"
#include "MoviePipelineOutputSetting.h"

UMoviePipelineMasterConfig::UMoviePipelineMasterConfig() {
    this->OutputSetting = CreateDefaultSubobject<UMoviePipelineOutputSetting>(TEXT("DefaultOutputSetting"));
}

void UMoviePipelineMasterConfig::InitializeTransientSettings() {
}

TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings() const {
    return TArray<UMoviePipelineSetting*>();
}

FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(const ULevelSequence* InSequence) const {
    return FFrameRate{};
}

TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const {
    return TArray<UMoviePipelineSetting*>();
}


