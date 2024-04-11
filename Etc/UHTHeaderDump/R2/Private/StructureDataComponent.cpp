#include "StructureDataComponent.h"

UStructureDataComponent::UStructureDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRestrictedMode = false;
    this->bOnFoundation = false;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
    this->BuilderId = 0;
}


