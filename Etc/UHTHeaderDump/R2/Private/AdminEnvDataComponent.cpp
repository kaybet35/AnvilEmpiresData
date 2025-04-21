#include "AdminEnvDataComponent.h"

UAdminEnvDataComponent::UAdminEnvDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFreeBuild = false;
    this->bDebugDraw = false;
    this->bGodMode = false;
    this->bShowStructureStats = false;
    this->bShowWeatherStats = false;
    this->bDebugHud = false;
    this->bShowLocateCoords = false;
}


