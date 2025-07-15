#include "StructureProxyComponent.h"

UStructureProxyComponent::UStructureProxyComponent() {
    this->bCannotBeDismantled = false;
    this->bRequireSupport = false;
    this->bEnemyCanConvert = false;
    this->bIsAlwaysEnclosed = false;
    this->IgnoreMeshVisbilityChanges = false;
    this->bCanOverrideFamilyAccessLevel = false;
    this->bCanBeReinforced = false;
    this->ReinforcingTime = 43200;
    this->CrenellationLevel = 0;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
}


