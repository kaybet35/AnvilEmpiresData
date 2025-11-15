#include "LocalLightComponent.h"

ULocalLightComponent::ULocalLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IntensityUnits = ELightUnits::Unitless;
    this->InverseExposureBlend = 0.00f;
    this->Radius = 1024.00f;
    this->AttenuationRadius = 1000.00f;
}

void ULocalLightComponent::SetIntensityUnits(ELightUnits NewIntensityUnits) {
}

void ULocalLightComponent::SetAttenuationRadius(float NewRadius) {
}

float ULocalLightComponent::GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle) {
    return 0.0f;
}


