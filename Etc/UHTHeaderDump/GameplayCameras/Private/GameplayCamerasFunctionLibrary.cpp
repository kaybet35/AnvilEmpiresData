#include "GameplayCamerasFunctionLibrary.h"

UGameplayCamerasFunctionLibrary::UGameplayCamerasFunctionLibrary() {
}

ECameraShakePlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace) {
    return ECameraShakePlaySpace::CameraLocal;
}

ECameraAnimationPlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace) {
    return ECameraAnimationPlaySpace::CameraLocal;
}

UCameraAnimationCameraModifier* UGameplayCamerasFunctionLibrary::Conv_CameraAnimationCameraModifier(APlayerCameraManager* PlayerCameraManager) {
    return NULL;
}


