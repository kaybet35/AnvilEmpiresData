#include "SphereComponent.h"

USphereComponent::USphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorCompositing = true;
    this->SphereRadius = 32.00f;
}

void USphereComponent::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
}

float USphereComponent::GetUnscaledSphereRadius() const {
    return 0.0f;
}

float USphereComponent::GetShapeScale() const {
    return 0.0f;
}

float USphereComponent::GetScaledSphereRadius() const {
    return 0.0f;
}


