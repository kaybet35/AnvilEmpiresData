#include "TweakableDataComponent.h"

UTweakableDataComponent::UTweakableDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopulationRequirementT2 = 0;
    this->PopulationRequirementT3 = 0;
    this->TentRequirementT2 = 0;
    this->TentRequirementT3 = 0;
    this->TownCenterRequiredBuilders = 0;
    this->TownMapDisableSize = 0;
    this->UpkeepCostReinforced = 0.00f;
    this->bClientsUseVisActorPool = false;
    this->bGlobalMaxVelocity = 0.00f;
    this->ForcedTimeOfDayNormalized = 0;
}


