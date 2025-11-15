#include "CameraModifier.h"

UCameraModifier::UCameraModifier() {
    this->bDebug = false;
    this->bExclusive = false;
    this->Priority = 127;
    this->CameraOwner = NULL;
    this->AlphaInTime = 0.00f;
    this->AlphaOutTime = 0.00f;
    this->Alpha = 0.00f;
}

void UCameraModifier::OnCameraOwnerDestroyed(AActor* InOwner) {
}

bool UCameraModifier::IsDisabled() const {
    return false;
}

AActor* UCameraModifier::GetViewTarget() const {
    return NULL;
}

void UCameraModifier::EnableModifier() {
}

void UCameraModifier::DisableModifier(bool bImmediate) {
}




