#include "HealthDataComponent.h"

UHealthDataComponent::UHealthDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHealth = 0.00f;
    this->Health = 0.00f;
    this->HealthLimit = 0.00f;
    this->VisualBloodAmount = 0.00f;
}


