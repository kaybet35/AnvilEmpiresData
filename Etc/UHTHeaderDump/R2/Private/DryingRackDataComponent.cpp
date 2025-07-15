#include "DryingRackDataComponent.h"

UDryingRackDataComponent::UDryingRackDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReplicatedCurrentItemDryingProgress = 0.00f;
}


