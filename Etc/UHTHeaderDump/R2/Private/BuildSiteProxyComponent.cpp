#include "BuildSiteProxyComponent.h"

UBuildSiteProxyComponent::UBuildSiteProxyComponent() {
    this->BuiltStructureEntity = NULL;
    this->BuildLocation = 0;
    this->CompatibleSurfaceTypes = 0;
    this->AllowedBuildAreas = 0;
    this->DisallowedBuildAreas = 0;
    this->RequiredTool = EAnvilToolType::None;
    this->bRequiresTownHall = false;
    this->bRequiresCamp = false;
    this->bRequiresSmallCamp = false;
    this->bRequiresClaimedFamilyHouse = false;
    this->bRequiresTerritoryOwnership = false;
    this->bBuildableOverRoads = false;
    this->bBuildableNearSpawnPoint = false;
    this->bBuildableInEnemyTerritory = false;
    this->bBuildableNearEnemies = false;
    this->bIsBuildableUnderground = false;
    this->bOnlyBuildableUnderground = false;
    this->bAllowRapidBuild = false;
    this->CanBuildTownStructureWithoutPledge = false;
    this->bBuildsInstantly = false;
    this->bMinDistanceCheckIgnoreEnemyStructures = false;
    this->bIsGridDiagonalPiece = false;
    this->TierPrerequisite = 0;
    this->RequiredDeployable = NULL;
    this->MaxHeightShift = 0.00f;
    this->AdditionalMaxHeightShift = 0.00f;
    this->GridDiagonalPair = NULL;
    this->NearbyPlayersRequired = 0;
}


