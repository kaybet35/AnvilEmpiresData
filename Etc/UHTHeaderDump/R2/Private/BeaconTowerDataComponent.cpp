#include "BeaconTowerDataComponent.h"

UBeaconTowerDataComponent::UBeaconTowerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDetected = false;
    this->bInformed = false;
}


