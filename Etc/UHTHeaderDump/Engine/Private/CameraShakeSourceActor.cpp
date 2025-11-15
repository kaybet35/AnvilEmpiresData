#include "CameraShakeSourceActor.h"
#include "CameraShakeSourceComponent.h"

ACameraShakeSourceActor::ACameraShakeSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("CameraShakeSourceComponent"));
    this->CameraShakeSourceComponent = (UCameraShakeSourceComponent*)RootComponent;
}


