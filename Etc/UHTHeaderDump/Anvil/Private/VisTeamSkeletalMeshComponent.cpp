#include "VisTeamSkeletalMeshComponent.h"

UVisTeamSkeletalMeshComponent::UVisTeamSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bReceivesDecals = false;
}


