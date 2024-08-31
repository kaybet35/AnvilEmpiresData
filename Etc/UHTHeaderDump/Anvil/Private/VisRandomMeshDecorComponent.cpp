#include "VisRandomMeshDecorComponent.h"

UVisRandomMeshDecorComponent::UVisRandomMeshDecorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bReceivesDecals = false;
    this->VisibilityChance = 0.50f;
}


