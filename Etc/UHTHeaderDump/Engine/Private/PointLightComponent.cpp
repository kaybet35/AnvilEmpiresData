#include "PointLightComponent.h"

UPointLightComponent::UPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseInverseSquaredFalloff = true;
    this->LightFalloffExponent = 8.00f;
    this->SourceRadius = 0.00f;
    this->SoftSourceRadius = 0.00f;
    this->SourceLength = 0.00f;
}

void UPointLightComponent::SetUseInverseSquaredFalloff(bool bNewValue) {
}

void UPointLightComponent::SetSourceRadius(float bNewValue) {
}

void UPointLightComponent::SetSourceLength(float NewValue) {
}

void UPointLightComponent::SetSoftSourceRadius(float bNewValue) {
}

void UPointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
}

void UPointLightComponent::SetInverseExposureBlend(float NewInverseExposureBlend) {
}


