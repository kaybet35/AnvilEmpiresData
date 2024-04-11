#include "ActiveCameraAnimationInfo.h"

FActiveCameraAnimationInfo::FActiveCameraAnimationInfo() {
    this->Sequence = NULL;
    this->Player = NULL;
    this->CameraStandIn = NULL;
    this->EaseInCurrentTime = 0.00f;
    this->EaseOutCurrentTime = 0.00f;
    this->bIsEasingIn = false;
    this->bIsEasingOut = false;
}

