#include "VectorFieldComponent.h"

UVectorFieldComponent::UVectorFieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->VectorField = NULL;
    this->Intensity = 1.00f;
    this->Tightness = 0.00f;
    this->bPreviewVectorField = false;
}

void UVectorFieldComponent::SetIntensity(float NewIntensity) {
}


