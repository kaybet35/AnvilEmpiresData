#include "TownHallDataComponent.h"

UTownHallDataComponent::UTownHallDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tier = 0;
    this->bIsSmallCamp = false;
    this->bLocalReinforcementOnly = false;
    this->TownHallId = 0;
    this->bTownUnderAttack = false;
    this->bHasSupplyStructure = false;
    this->PledgedPlayersArrayCount = 0;
    this->NumTotalHouses = 0;
    this->NumTotalTents = 0;
    this->NumUnclaimedTents = 0;
    this->NumReinforcementSupplies = 0;
    this->CitizenXpRequirement = 0;
    this->NobleXpRequirement = 0;
    this->TownXp = 0;
    this->TownNameId = 0;
    this->TownNameOrdinal = 0;
}


