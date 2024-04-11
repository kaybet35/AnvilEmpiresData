#include "HorseAttachableDataComponent.h"

UHorseAttachableDataComponent::UHorseAttachableDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedEntityType = 0;
    this->DetachedEntityType = 0;
    this->HorseEntityType = 0;
}


