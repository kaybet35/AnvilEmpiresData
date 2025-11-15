#include "SceneCaptureCube.h"
#include "SceneCaptureComponentCube.h"

ASceneCaptureCube::ASceneCaptureCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureComponentCube = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("NewSceneCaptureComponentCube"));
    this->CaptureComponentCube->SetupAttachment(RootComponent);
}

void ASceneCaptureCube::OnInterpToggle(bool bEnable) {
}


