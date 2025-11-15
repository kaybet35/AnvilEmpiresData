#include "MaterialInstanceActor.h"
#include "SceneComponent.h"

AMaterialInstanceActor::AMaterialInstanceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


