#include "MeshVisibilityDataComponent.h"

UMeshVisibilityDataComponent::UMeshVisibilityDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsVisible = false;
    this->bGroup2IsVisible = false;
}


