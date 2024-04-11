#include "TownHallProxyComponent.h"

UTownHallProxyComponent::UTownHallProxyComponent() {
    this->Tier = 1;
    this->bIsSmallCamp = false;
    this->bLocalReinforcementOnly = false;
    this->CitizenXpRequirement = 1000;
    this->NobleXpRequirement = 3500;
    this->AbandonedStartTime = 1500.00f;
}


