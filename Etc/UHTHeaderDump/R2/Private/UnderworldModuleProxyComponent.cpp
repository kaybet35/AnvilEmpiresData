#include "UnderworldModuleProxyComponent.h"

UUnderworldModuleProxyComponent::UUnderworldModuleProxyComponent() {
    this->bIsStatic = false;
    this->NumDynamicModulesMin = 0;
    this->NumDynamicModulesMax = 0;
    this->MaxNumDynamicModuleSpawnDistance = 0;
}


