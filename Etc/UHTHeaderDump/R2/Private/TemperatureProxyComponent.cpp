#include "TemperatureProxyComponent.h"

UTemperatureProxyComponent::UTemperatureProxyComponent() {
    this->DamagePerFreezingTick = 3.00f;
    this->StructureInteriorTempIncreasePerSec = 0.02f;
    this->WarmStructureTempIncreasePerSec = 0.05f;
    this->WarmStructureSearchRadius = 300.00f;
}


