#include "VisRandomMeshComponent.h"

UVisRandomMeshComponent::UVisRandomMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VariationIndex = 0;
    this->PreviewIndex = 0;
}

void UVisRandomMeshComponent::HandleVariationLoaded() {
}


