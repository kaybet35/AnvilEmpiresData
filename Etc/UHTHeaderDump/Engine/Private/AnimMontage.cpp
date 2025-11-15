#include "AnimMontage.h"

UAnimMontage::UAnimMontage() {
    this->BlendModeIn = EMontageBlendMode::Standard;
    this->BlendModeOut = EMontageBlendMode::Standard;
    this->BlendInTime = -1.00f;
    this->BlendOutTime = -1.00f;
    this->BlendOutTriggerTime = -1.00f;
    this->SyncSlotIndex = 0;
    this->SlotAnimTracks.AddDefaulted(1);
    this->bEnableRootMotionTranslation = false;
    this->bEnableRootMotionRotation = false;
    this->bEnableAutoBlendOut = true;
    this->BlendProfileIn = NULL;
    this->BlendProfileOut = NULL;
    this->RootMotionRootLock = ERootMotionRootLock::RefPose;
    this->TimeStretchCurveName = TEXT("MontageTimeStretchCurve");
}

bool UAnimMontage::IsValidSectionName(FName InSectionName) const {
    return false;
}

FName UAnimMontage::GetSectionName(int32 SectionIndex) const {
    return NAME_None;
}

int32 UAnimMontage::GetSectionIndex(FName InSectionName) const {
    return 0;
}

int32 UAnimMontage::GetNumSections() const {
    return 0;
}

float UAnimMontage::GetDefaultBlendOutTime() const {
    return 0.0f;
}

float UAnimMontage::GetDefaultBlendInTime() const {
    return 0.0f;
}

FAlphaBlendArgs UAnimMontage::GetBlendOutArgs() const {
    return FAlphaBlendArgs{};
}

FAlphaBlendArgs UAnimMontage::GetBlendInArgs() const {
    return FAlphaBlendArgs{};
}

UAnimMontage* UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings(UAnimSequenceBase* Asset, FName SlotNodeName, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, float InPlayRate, int32 LoopCount, float InBlendOutTriggerTime) {
    return NULL;
}


