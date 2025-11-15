#include "PlayerInput.h"

UPlayerInput::UPlayerInput() {
    this->DebugExecBindings.AddDefaulted(17);
}

void UPlayerInput::SetMouseSensitivity(const float Sensitivity) {
}

void UPlayerInput::SetBind(FName BindName, const FString& Command) {
}

void UPlayerInput::InvertAxisKey(const FKey AxisKey) {
}

void UPlayerInput::InvertAxis(const FName AxisName) {
}

APlayerController* UPlayerInput::GetOuterAPlayerController() const {
    return NULL;
}

void UPlayerInput::ClearSmoothing() {
}


