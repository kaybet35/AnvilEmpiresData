#include "CameraAnimationParams.h"

FCameraAnimationParams::FCameraAnimationParams() {
    this->PlayRate = 0.00f;
    this->Scale = 0.00f;
    this->EaseInType = ECameraAnimationEasingType::Linear;
    this->EaseInDuration = 0.00f;
    this->EaseOutType = ECameraAnimationEasingType::Linear;
    this->EaseOutDuration = 0.00f;
    this->bLoop = false;
    this->bRandomStartTime = false;
    this->DurationOverride = 0.00f;
    this->PlaySpace = ECameraAnimationPlaySpace::CameraLocal;
}

