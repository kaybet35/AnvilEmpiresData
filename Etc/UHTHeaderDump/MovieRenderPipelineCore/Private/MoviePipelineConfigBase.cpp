#include "MoviePipelineConfigBase.h"
#include "Templates/SubclassOf.h"

UMoviePipelineConfigBase::UMoviePipelineConfigBase() {
    this->DisplayName = TEXT("Unsaved Config");
}

void UMoviePipelineConfigBase::RemoveSetting(UMoviePipelineSetting* InSetting) {
}

TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings() const {
    return TArray<UMoviePipelineSetting*>();
}

TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings) const {
    return TArray<UMoviePipelineSetting*>();
}

UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings) const {
    return NULL;
}

UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings) {
    return NULL;
}

void UMoviePipelineConfigBase::CopyFrom(UMoviePipelineConfigBase* InConfig) {
}


