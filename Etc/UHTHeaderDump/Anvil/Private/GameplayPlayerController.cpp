#include "GameplayPlayerController.h"

AGameplayPlayerController::AGameplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CallForReinforcementsCue = NULL;
    this->LandscapeCullRVTVolumeClass = NULL;
    this->LandscapeCullRVTVolume = NULL;
    this->FoliageCullRVTVolumeClass = NULL;
    this->FoliageCullRVTVolume = NULL;
}


