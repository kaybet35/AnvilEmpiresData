#include "PowerUnitDataComponent.h"

UPowerUnitDataComponent::UPowerUnitDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PercentageCurrent = 0.00f;
    this->VisVarUpdateHook = 0;
    this->InFlowDirection = 0.00f;
    this->InFlowHeight = 0.00f;
}


