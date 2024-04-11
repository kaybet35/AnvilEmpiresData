#include "StructureProxyComponent.h"

UStructureProxyComponent::UStructureProxyComponent() {
    this->bCannotBeDismantled = false;
    this->bRequireSupport = false;
    this->StructureType = EAnvilBuildStructureType::Monolithic;
    this->BuiltLocation = EAnvilBuildLocationType::Static;
}


