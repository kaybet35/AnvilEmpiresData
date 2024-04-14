#include "BuildSiteDataComponent.h"

UBuildSiteDataComponent::UBuildSiteDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildGhostPlacementStatus = 0;
    this->PlacementInfoFlags = 0;
}


