#include "EntityAttachableDataComponent.h"

UEntityAttachableDataComponent::UEntityAttachableDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedEntity = 0;
}


