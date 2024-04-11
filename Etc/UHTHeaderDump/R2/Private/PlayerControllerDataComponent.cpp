#include "PlayerControllerDataComponent.h"

UPlayerControllerDataComponent::UPlayerControllerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PledgedTownHallId = 0;
    this->PledgedMilitiaTownHallId = 0;
    this->bShowRespawnScreen = 0;
    this->CurrentSpawnTimer = 0.00f;
    this->bShowDeathMarker = 0;
}


