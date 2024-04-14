#include "AdminEnvDataComponent.h"

UAdminEnvDataComponent::UAdminEnvDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugDrawHook = false;
    this->bShowStructureStatsHook = false;
    this->bShowWeatherStatsHook = false;
}


