#include "StructureDataComponent.h"

UStructureDataComponent::UStructureDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRestrictedMode = false;
    this->bOnFoundation = false;
    this->bIsCollapsed = false;
    this->bIsFamilyDestroyed = false;
    this->bIsTownDestroyed = false;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
    this->BuilderId = 0;
    this->TownFamilyAreaId = 0;
}


