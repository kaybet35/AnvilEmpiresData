#include "SceneCaptureComponentCube.h"

USceneCaptureComponentCube::USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TextureTarget = NULL;
    this->bCaptureRotation = false;
}

void USceneCaptureComponentCube::CaptureScene() {
}


