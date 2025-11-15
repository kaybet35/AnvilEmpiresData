#include "SceneCapture2D.h"
#include "SceneCaptureComponent2D.h"

ASceneCapture2D::ASceneCapture2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("NewSceneCaptureComponent2D"));
    this->CaptureComponent2D->SetupAttachment(RootComponent);
}

void ASceneCapture2D::OnInterpToggle(bool bEnable) {
}


