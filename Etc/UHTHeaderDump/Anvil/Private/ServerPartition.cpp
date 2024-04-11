#include "ServerPartition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ServerPartitionComponent.h"

AServerPartition::AServerPartition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ServerPartitionComponent = CreateDefaultSubobject<UServerPartitionComponent>(TEXT("ServerPartitionComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


