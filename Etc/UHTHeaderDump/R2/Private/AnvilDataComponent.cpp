#include "AnvilDataComponent.h"

UAnvilDataComponent::UAnvilDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayType = EAnvilAnvilGameplayType::Normal;
    this->InputItemName = 0;
    this->CurrentSelectedOutputIndex = 0;
    this->HitCounter = 0.00f;
}


