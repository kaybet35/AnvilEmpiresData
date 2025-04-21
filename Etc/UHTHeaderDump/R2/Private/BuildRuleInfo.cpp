#include "BuildRuleInfo.h"

FBuildRuleInfo::FBuildRuleInfo() {
    this->bBuildableOverRoads = false;
    this->bBuildableNearSpawnPoint = false;
    this->bBuildableInEnemyArea = false;
    this->bBuildableNearEnemies = false;
    this->bBuildableInWildernessWithoutPledge = false;
    this->LimitTouchingGroupCount = false;
    this->bAllowCrossingHomesteadAreaBorder = false;
    this->RequiredAgeSeconds = 0.00f;
    this->NearbyPlayersRequired = 0;
    this->TierPrerequisite = 0;
}

