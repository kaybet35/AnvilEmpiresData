#include "UpgradeDataComponent.h"

UUpgradeDataComponent::UUpgradeDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpgradeTarget = 0;
    this->PopRequirement = 0;
    this->TierPrerequisite = 0;
    this->WorkRequirement = 0;
    this->ProcessedWoodRequirement = 0;
    this->ProcessedStoneRequirement = 0;
    this->ProcessedIronRequirement = 0;
    this->ReinforcedWoodRequirement = 0;
    this->SilverRequirement = 0;
    this->AnimalFatRequirement = 0;
    this->AnimalBonesRequirement = 0;
    this->ProcessedLeatherRequirement = 0;
    this->WorkSubmitted = 0;
    this->ProcessedWoodSubmitted = 0;
    this->ProcessedStoneSubmitted = 0;
    this->ProcessedIronSubmitted = 0;
    this->ReinforcedWoodSubmitted = 0;
    this->SilverSubmitted = 0;
    this->AnimalFatSubmitted = 0;
    this->AnimalBonesSubmitted = 0;
    this->ProcessedLeatherSubmitted = 0;
    this->bIsUpgrading = 0;
}


