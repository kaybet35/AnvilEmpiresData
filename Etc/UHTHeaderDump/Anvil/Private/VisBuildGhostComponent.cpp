#include "VisBuildGhostComponent.h"

UVisBuildGhostComponent::UVisBuildGhostComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildSiteDataComponent = NULL;
    this->BuildCollisionDecalComponent = NULL;
}


