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
    this->WorkSubmitted = 0;
    this->ProcessedWoodSubmitted = 0;
    this->ProcessedStoneSubmitted = 0;
    this->ProcessedIronSubmitted = 0;
    this->ReinforcedWoodSubmitted = 0;
    this->bIsUpgrading = 0;
}


