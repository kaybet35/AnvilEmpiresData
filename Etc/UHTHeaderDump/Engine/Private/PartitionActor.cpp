#include "PartitionActor.h"
#include "SceneComponent.h"

APartitionActor::APartitionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
}


