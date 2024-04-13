#include "PlayerControllerDataComponent.h"

UPlayerControllerDataComponent::UPlayerControllerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PledgedTownHallInfo = 0;
    this->PledgedMilitiaInfo = 0;
    this->bShowRespawnScreen = 0;
    this->CurrentSpawnTimer = 0.00f;
    this->bShowDeathMarker = 0;
}


