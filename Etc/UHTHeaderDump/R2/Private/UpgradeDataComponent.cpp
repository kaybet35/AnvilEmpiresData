#include "UpgradeDataComponent.h"

UUpgradeDataComponent::UUpgradeDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopRequirement = 0;
    this->bIsUpgrading = false;
}


