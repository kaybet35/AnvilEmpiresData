#include "SpotLightComponent.h"

USpotLightComponent::USpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 44.00f;
}

void USpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
}

void USpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
}


