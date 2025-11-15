#include "InputSettings.h"

UInputSettings::UInputSettings() {
    this->AxisConfig.AddDefaulted(73);
    this->bAltEnterTogglesFullscreen = true;
    this->bF11TogglesFullscreen = true;
    this->bUseMouseForTouch = false;
    this->bEnableMouseSmoothing = true;
    this->bEnableFOVScaling = true;
    this->bCaptureMouseOnLaunch = false;
    this->bEnableLegacyInputScales = true;
    this->bEnableMotionControls = true;
    this->bFilterInputByPlatformUser = false;
    this->bShouldFlushPressedKeysOnViewportFocusLost = true;
    this->bEnableDynamicComponentInputBinding = true;
    this->bAlwaysShowTouchInterface = false;
    this->bShowConsoleOnFourFingerTap = true;
    this->bEnableGestureRecognizer = false;
    this->bUseAutocorrect = false;
    this->DefaultViewportMouseCaptureMode = EMouseCaptureMode::CaptureDuringMouseDown;
    this->DefaultViewportMouseLockMode = EMouseLockMode::DoNotLock;
    this->FOVScale = 0.01f;
    this->DoubleClickTime = 0.20f;
    this->ActionMappings.AddDefaulted(52);
    this->AxisMappings.AddDefaulted(6);
    this->ConsoleKeys.AddDefaulted(3);
}

void UInputSettings::SaveKeyMappings() {
}

void UInputSettings::RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

void UInputSettings::RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

UInputSettings* UInputSettings::GetInputSettings() {
    return NULL;
}

void UInputSettings::GetAxisNames(TArray<FName>& AxisNames) const {
}

void UInputSettings::GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const {
}

void UInputSettings::GetActionNames(TArray<FName>& ActionNames) const {
}

void UInputSettings::GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const {
}

void UInputSettings::ForceRebuildKeymaps() {
}

void UInputSettings::AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

void UInputSettings::AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}


