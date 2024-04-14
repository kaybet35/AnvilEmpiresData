#include "StructureProxyComponent.h"

UStructureProxyComponent::UStructureProxyComponent() {
    this->bCannotBeDismantled = false;
    this->bRequireSupport = false;
    this->bCanCollapse = false;
    this->bIsAlwaysEnclosed = false;
    this->IgnoreMeshVisbilityChanges = false;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
}


