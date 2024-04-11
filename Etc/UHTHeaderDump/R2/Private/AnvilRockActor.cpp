#include "AnvilRockActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AAnvilRockActor::AAnvilRockActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->RockMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMeshComponent"));
    this->RockMeshComponent->SetupAttachment(RootComponent);
}


