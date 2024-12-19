#include "BuildRuleInfo.h"

FBuildRuleInfo::FBuildRuleInfo() {
    this->RequiresEnclosure = false;
    this->bBuildableOverRoads = false;
    this->bBuildableNearSpawnPoint = false;
    this->bBuildableInEnemyArea = false;
    this->bBuildableNearEnemies = false;
    this->NearbyPlayersRequired = 0;
    this->TierPrerequisite = 0;
    this->bBuildableInWildernessWithoutPledge = false;
}

