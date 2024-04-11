#include "IKRetargeter.h"
#include "IKRetargetGlobalSettings.h"
#include "RetargetRootSettings.h"

UIKRetargeter::UIKRetargeter() {
    this->RootSettings = CreateDefaultSubobject<URetargetRootSettings>(TEXT("RootSettings"));
    this->GlobalSettings = CreateDefaultSubobject<UIKRetargetGlobalSettings>(TEXT("GlobalSettings"));
    this->CurrentSourceRetargetPose = TEXT("Default Pose");
    this->CurrentTargetRetargetPose = TEXT("Default Pose");
}

void UIKRetargeter::SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetRootSettings& NewRootSettings) {
}

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& NewGlobalSettings) {
}

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSettings& NewChainSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName) {
}

FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile) {
    return FTargetRootSettings{};
}

void UIKRetargeter::GetRootSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings) {
}

FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile) {
    return FRetargetGlobalSettings{};
}

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings) {
}

FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName IKGoalName) {
    return FTargetChainSettings{};
}

FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, const FName TargetChainName) {
    return FTargetChainSettings{};
}

FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName) {
    return FTargetChainSettings{};
}


