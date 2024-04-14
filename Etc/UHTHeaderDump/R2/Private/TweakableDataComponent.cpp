#include "TweakableDataComponent.h"

UTweakableDataComponent::UTweakableDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopulationRequirementT2 = 0;
    this->PopulationRequirementT3 = 0;
    this->FamilyHouseRequirementT2 = 0;
    this->FamilyHouseRequirementT3 = 0;
    this->MarketplaceAreaRequirementT2 = 0;
    this->MarketplaceAreaRequirementT3 = 0;
    this->TownCenterRequiredBuilders = 0;
}


