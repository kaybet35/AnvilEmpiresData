#include "R2ConfigBuildSiteDistanceRule.h"

FR2ConfigBuildSiteDistanceRule::FR2ConfigBuildSiteDistanceRule() {
    this->Range = 0.00f;
    this->LevelDistance = 0.00f;
    this->bWithinTownRange = false;
    this->NeighbourLimit = 0;
    this->FriendlyTeam = EAnvilTrinaryRequirement::Allowed;
    this->ErrorCode = EAnvilPlacementStatus::Valid;
}

