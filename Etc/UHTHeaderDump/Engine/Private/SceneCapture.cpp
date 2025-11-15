#include "SceneCapture.h"
#include "SceneComponent.h"

ASceneCapture::ASceneCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->MeshComp = NULL;
    this->SceneComponent = (USceneComponent*)RootComponent;
}


