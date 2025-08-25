#include "ShipMovementDataComponent.h"

UShipMovementDataComponent::UShipMovementDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSailOpen = false;
    this->bIsGangplankLeftOpen = false;
    this->bIsGangplankRightOpen = false;
}


