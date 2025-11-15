#include "TargetPoint.h"
#include "SceneComponent.h"

ATargetPoint::ATargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


