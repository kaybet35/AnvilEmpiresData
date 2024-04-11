#include "PowerUnitProxyComponent.h"

UPowerUnitProxyComponent::UPowerUnitProxyComponent() {
    this->Type = EAnvilPowerUnitType::Pipe;
    this->PressureMax = 0.00f;
    this->FlatResistance = 0.00f;
    this->ResistanceSlopeModifier = 0.00f;
    this->Direction = 1;
}


