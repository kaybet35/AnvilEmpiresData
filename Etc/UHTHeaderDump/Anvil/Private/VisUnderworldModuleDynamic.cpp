#include "VisUnderworldModuleDynamic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=DynamicPrefabDataComponent -FallbackName=DynamicPrefabDataComponent

AVisUnderworldModuleDynamic::AVisUnderworldModuleDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicPrefabChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("DynamicPrefabChildActor"));
    this->DynamicPrefabDataComponent = CreateDefaultSubobject<UDynamicPrefabDataComponent>(TEXT("DynamicPrefabDataComponent"));
    this->SpawnedDynamicPrefab = NULL;
    this->DynamicPrefabChildActor->SetupAttachment(RootComponent);
}


