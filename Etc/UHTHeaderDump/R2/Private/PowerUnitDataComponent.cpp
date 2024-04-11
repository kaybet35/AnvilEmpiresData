#include "PowerUnitDataComponent.h"

UPowerUnitDataComponent::UPowerUnitDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Pressure = 0.00f;
    this->Direction = 0;
    this->FlowDirection = 0;
}


