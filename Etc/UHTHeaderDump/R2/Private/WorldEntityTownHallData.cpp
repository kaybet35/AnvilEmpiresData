#include "WorldEntityTownHallData.h"

FWorldEntityTownHallData::FWorldEntityTownHallData() {
    this->TownHallId = 0;
    this->TownNameOrdinal = 0;
    this->TownNameId = 0;
    this->Tier = 0;
    this->NumTotalHouses = 0;
    this->NumUnclaimedHouses = 0;
    this->NumTotalTents = 0;
    this->NumUnclaimedTents = 0;
    this->NumPledgedPlayers = 0;
    this->bTownUnderAttack = false;
    this->bCallForReinforcements = false;
}

