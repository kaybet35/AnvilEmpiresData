#include "PowerUnitProxyComponent.h"

UPowerUnitProxyComponent::UPowerUnitProxyComponent() {
    this->Type = EAnvilPowerUnitType::Pipe;
    this->AllowedDirection = 1;
    this->CurrentMax = 0.00f;
    this->FlatResistance = 0.00f;
    this->ResistanceSlopeModifier = 0.00f;
    this->InnerWidth = 0.00f;
    this->Outerwidth = 0.00f;
}


