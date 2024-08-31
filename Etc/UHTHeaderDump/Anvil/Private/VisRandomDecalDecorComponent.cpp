#include "VisRandomDecalDecorComponent.h"

UVisRandomDecalDecorComponent::UVisRandomDecalDecorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->VisibilityChance = 0.50f;
}


