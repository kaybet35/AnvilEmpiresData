#include "UnderworldModuleProxyComponent.h"

UUnderworldModuleProxyComponent::UUnderworldModuleProxyComponent() {
    this->bIsStatic = false;
    this->NumDynamicModulesMin = 0;
    this->NumDynamicModulesMax = 0;
    this->MaxNumDynamicModuleSpawnDistance = 0;
    this->TimeUntilCollapseMin_Hrs = 8.00f;
    this->TimeUntilCollapseMax_Hrs = 36.00f;
    this->TelegraphEventStartTimeBeforeCollapse_Hrs = 4.00f;
    this->TelegraphEventIntervalMin_Sec = 60.00f;
    this->TelegraphEventIntervalMax_Sec = 600.00f;
}


