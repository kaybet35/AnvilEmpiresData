#include "CameraShakeBase.h"

UCameraShakeBase::UCameraShakeBase() {
    this->bSingleInstance = false;
    this->ShakeScale = 1.00f;
    this->RootShakePattern = NULL;
    this->CameraManager = NULL;
}

void UCameraShakeBase::SetRootShakePattern(UCameraShakePattern* InPattern) {
}

UCameraShakePattern* UCameraShakeBase::GetRootShakePattern() const {
    return NULL;
}


