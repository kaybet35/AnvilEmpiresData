#include "AnimationSettings.h"

UAnimationSettings::UAnimationSettings() {
    this->CompressCommandletVersion = 2;
    this->KeyEndEffectorsMatchNameArray.AddDefaulted(6);
    this->ForceRecompression = false;
    this->bForceBelowThreshold = false;
    this->bFirstRecompressUsingCurrentOrDefault = true;
    this->bRaiseMaxErrorToExisting = false;
    this->bEnablePerformanceLog = false;
    this->bStripAnimationDataOnDedicatedServer = false;
    this->bTickAnimationOnSkeletalMeshInit = true;
    this->DefaultAttributeBlendMode = ECustomAttributeBlendType::Blend;
    this->MirrorFindReplaceExpressions.AddDefaulted(21);
}

TArray<FString> UAnimationSettings::GetBoneCustomAttributeNamesToImport() const {
    return TArray<FString>();
}


