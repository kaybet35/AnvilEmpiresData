#include "CameraAnimationCameraModifier.h"

UCameraAnimationCameraModifier::UCameraAnimationCameraModifier() {
    this->NextInstanceSerialNumber = 1;
}

void UCameraAnimationCameraModifier::StopCameraAnimation(const FCameraAnimationHandle& Handle, bool bImmediate) {
}

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(UCameraAnimationSequence* Sequence, bool bImmediate) {
}

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate) {
}

FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params) {
    return FCameraAnimationHandle{};
}

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const FCameraAnimationHandle& Handle) const {
    return false;
}

UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(const APlayerController* PlayerController) {
    return NULL;
}

UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(const UObject* WorldContextObject, int32 ControllerId) {
    return NULL;
}

UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}


