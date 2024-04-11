#include "HeatingDataComponent.h"

UHeatingDataComponent::UHeatingDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelExpiryTimestampAgeSec = 0;
    this->bIsFueled = false;
}


