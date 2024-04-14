#include "VisRopeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AnimalRopeAttachableDataComponent -FallbackName=AnimalRopeAttachableDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AnimalRopeSlotDataComponent -FallbackName=AnimalRopeSlotDataComponent

UVisRopeComponent::UVisRopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineComponent = CreateDefaultSubobject<UCableComponent>(TEXT("LineComponent"));
    this->RopeDataComponent = CreateDefaultSubobject<UAnimalRopeAttachableDataComponent>(TEXT("RopeDataComponent"));
    this->RopeSlotDataComponent = CreateDefaultSubobject<UAnimalRopeSlotDataComponent>(TEXT("RopeSlotDataComponent"));
}


