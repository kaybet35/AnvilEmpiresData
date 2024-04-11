#include "PowerUnitDataComponent.h"

UPowerUnitDataComponent::UPowerUnitDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PercentageCurrent = 0.00f;
    this->VisVarUpdateHook = 0;
}


