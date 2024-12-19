#include "BuildSiteDataComponent.h"

UBuildSiteDataComponent::UBuildSiteDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlacementInfoFlags = 0;
    this->PlacementInfoPayload = 0;
    this->VisualGuideMinDistance = 0.00f;
}


