#include "AnimalFlyingProxyComponent.h"

UAnimalFlyingProxyComponent::UAnimalFlyingProxyComponent() {
    this->CruisingHeightMin = 1100.00f;
    this->CruisingHeightMax = 1600.00f;
    this->SlowTurningAccel = 80.00f;
    this->FastTurningAccel = 200.00f;
    this->ClimbingSpeedModifier = 0.50f;
    this->DivingSpeedModifier = 0.50f;
    this->DiveRange = 1000.00f;
}


