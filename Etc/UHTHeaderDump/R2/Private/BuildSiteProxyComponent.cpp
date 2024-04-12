#include "BuildSiteProxyComponent.h"

UBuildSiteProxyComponent::UBuildSiteProxyComponent() {
    this->BuiltStructureEntity = NULL;
    this->BuildLocation = 0;
    this->CompatibleSurfaceTypes = 0;
    this->RequiredTool = EAnvilToolType::None;
    this->bRequiresTownHall = false;
    this->bRequiresCamp = false;
    this->bRequiresSmallCamp = false;
    this->RequiresHorseToComplete = false;
    this->bBuildableOverRoads = false;
    this->bBuildableNearSpawnPoint = false;
    this->bBuildableInEnemyTerritory = false;
    this->bBuildableNearEnemies = false;
    this->bAllowRapidBuild = false;
    this->DontMigrateFootprintToBuiltEntity = false;
    this->TierPrerequisite = 0;
    this->RequiredDeployable = NULL;
    this->MaxHeightShift = 0.00f;
    this->AdditionalMaxHeightShift = 0.00f;
    this->MinDistanceBetweenStructures = 0.00f;
    this->RoadMaterialRequirement = 0;
    this->ResourceBranchesRequirement = 0;
    this->ProcessedWoodRequirement = 0;
    this->ProcessedStoneRequirement = 0;
    this->ProcessedIronRequirement = 0;
    this->ReinforcedWoodRequirement = 0;
    this->ResourceFibreRequirement = 0;
    this->ResourceBranchesRawRequirement = 0;
    this->XpReward = 5;
}


