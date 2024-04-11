#include "VisStaticMeshComponent.h"

UVisStaticMeshComponent::UVisStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->VisMeshProfile = EVisMeshProfile::Undefined;
    this->bMeshVisibility = false;
}


