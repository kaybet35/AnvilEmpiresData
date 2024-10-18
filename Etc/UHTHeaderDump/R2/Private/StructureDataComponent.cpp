#include "StructureDataComponent.h"

UStructureDataComponent::UStructureDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRestrictedMode = false;
    this->bOnFoundation = false;
    this->bIsCollapsed = false;
    this->bIsFamilyDestroyed = false;
    this->bIsTownDestroyed = false;
    this->bCanOverrideFamilyAccessLevel = false;
    this->bCanBeReinforced = false;
    this->bReinforcing = false;
    this->bReinforced = false;
    this->ReinforcingFinishTime = 0;
    this->ReinforcingTime = 0;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
    this->BuilderId = 0;
    this->TownFamilyAreaId = 0;
    this->FamilyAccessLevel = EAnvilR2FamilyRoleType::Guest;
}


