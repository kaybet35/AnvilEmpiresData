#include "TownHallProxyComponent.h"

UTownHallProxyComponent::UTownHallProxyComponent() {
    this->Tier = 1;
    this->bIsSmallCamp = false;
    this->bLocalReinforcementOnly = false;
    this->SubType = EAnvilTownSubType::None;
    this->AbandonedStartTime = 2700.00f;
    this->OriginalOwnerTeamId = 0;
}


