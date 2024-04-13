#include "StructureProxyComponent.h"

UStructureProxyComponent::UStructureProxyComponent() {
    this->bCannotBeDismantled = false;
    this->bRequireSupport = false;
    this->IgnoreMeshVisbilityChanges = false;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
}


