#include "TownHallDataComponent.h"

UTownHallDataComponent::UTownHallDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tier = 0;
    this->bIsSmallCamp = false;
    this->TownHallId = 0;
    this->SubType = EAnvilTownSubType::None;
    this->Range = 0.00f;
    this->PledgedPlayersArrayCount = 0;
    this->NumTotalHouses = 0;
    this->NumUnclaimedHouses = 0;
    this->NumTotalTents = 0;
    this->NumUnclaimedTents = 0;
    this->TownNameId = 0;
    this->TownNameOrdinal = 0;
}


