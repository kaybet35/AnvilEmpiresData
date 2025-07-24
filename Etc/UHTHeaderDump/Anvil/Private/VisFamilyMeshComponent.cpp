#include "VisFamilyMeshComponent.h"

UVisFamilyMeshComponent::UVisFamilyMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bReceivesDecals = false;
    this->FamilyVisualsMaterialIndex = 0;
    this->bOnlyShowForFamilyMembers = false;
}


