#include "WaterMeshComponent.h"

UWaterMeshComponent::UWaterMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Mobility = EComponentMobility::Static;
    this->bHasPerInstanceHitProxies = true;
    this->ForceCollapseDensityLevel = -1;
    this->FarDistanceMaterial = NULL;
    this->FarDistanceMeshExtent = 0.00f;
    this->TileSize = 2400.00f;
    this->TessellationFactor = 6;
    this->LODScale = 1.00f;
}

bool UWaterMeshComponent::IsEnabled() const {
    return false;
}


