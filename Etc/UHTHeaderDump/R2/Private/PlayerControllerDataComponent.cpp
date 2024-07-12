#include "PlayerControllerDataComponent.h"

UPlayerControllerDataComponent::UPlayerControllerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowRespawnScreen = 0;
    this->RedeployTarget = 0;
    this->LastDeathMapId = 0;
}


