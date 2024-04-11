#include "VisTeamMeshComponent.h"

UVisTeamMeshComponent::UVisTeamMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bReceivesDecals = false;
}


