#include "EntityAttachableDataComponent.h"

UEntityAttachableDataComponent::UEntityAttachableDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedNewEntityType = 0;
    this->DetachedNewEntityType = 0;
    this->TargetEntityType = 0;
}


