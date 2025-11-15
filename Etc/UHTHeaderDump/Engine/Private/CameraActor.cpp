#include "CameraActor.h"
#include "CameraComponent.h"
#include "SceneComponent.h"

ACameraActor::ACameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AutoActivateForPlayer = EAutoReceiveInput::Disabled;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->bConstrainAspectRatio = true;
    this->AspectRatio = 1.78f;
    this->FOVAngle = 90.00f;
    this->PostProcessBlendWeight = 1.00f;
    this->CameraComponent->SetupAttachment(RootComponent);
}

int32 ACameraActor::GetAutoActivatePlayerIndex() const {
    return 0;
}


