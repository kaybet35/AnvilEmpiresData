#include "BuildSiteDataComponent.h"

UBuildSiteDataComponent::UBuildSiteDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuiltStructureEntity = 0;
    this->RequiredTool = EAnvilToolType::None;
    this->bRequiresTownHall = false;
    this->bRequiresCamp = false;
    this->bRequiresSmallCamp = false;
    this->RequiresHorseToComplete = false;
    this->bBuildsInstantly = false;
    this->TierPrerequisite = 0;
    this->RoadMaterialRequirement = 0;
    this->ResourceBranchesRequirement = 0;
    this->ProcessedWoodRequirement = 0;
    this->ProcessedStoneRequirement = 0;
    this->ProcessedIronRequirement = 0;
    this->ReinforcedWoodRequirement = 0;
    this->ResourceFibreRequirement = 0;
    this->AnimalFatRequirement = 0;
    this->AnimalBonesRequirement = 0;
    this->ProcessedLeatherRequirement = 0;
    this->RoadMaterialSubmitted = 0;
    this->ResourceBranchesSubmitted = 0;
    this->ProcessedWoodSubmitted = 0;
    this->ProcessedStoneSubmitted = 0;
    this->ProcessedIronSubmitted = 0;
    this->ReinforcedWoodSubmitted = 0;
    this->ResourceFibreSubmitted = 0;
    this->AnimalFatSubmitted = 0;
    this->AnimalBonesSubmitted = 0;
    this->ProcessedLeatherSubmitted = 0;
    this->BuildGhostPlacementStatus = 0;
    this->PlacementInfoFlags = 0;
}


