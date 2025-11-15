#include "SkyAtmosphereComponent.h"

USkyAtmosphereComponent::USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin;
    this->BottomRadius = 6360.00f;
    this->AtmosphereHeight = 60.00f;
    this->MultiScatteringFactor = 1.00f;
    this->TraceSampleCountScale = 1.00f;
    this->RayleighScatteringScale = 0.03f;
    this->RayleighExponentialDistribution = 8.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.80f;
    this->MieExponentialDistribution = 1.20f;
    this->OtherAbsorptionScale = 0.00f;
    this->AerialPespectiveViewDistanceScale = 1.00f;
    this->HeightFogContribution = 1.00f;
    this->TransmittanceMinLightElevationAngle = -90.00f;
    this->AerialPerspectiveStartDepth = 0.10f;
}

void USkyAtmosphereComponent::SetSkyLuminanceFactor(FLinearColor NewValue) {
}

void USkyAtmosphereComponent::SetRayleighScatteringScale(float NewValue) {
}

void USkyAtmosphereComponent::SetRayleighScattering(FLinearColor NewValue) {
}

void USkyAtmosphereComponent::SetRayleighExponentialDistribution(float NewValue) {
}

void USkyAtmosphereComponent::SetOtherAbsorptionScale(float NewValue) {
}

void USkyAtmosphereComponent::SetOtherAbsorption(FLinearColor NewValue) {
}

void USkyAtmosphereComponent::SetMultiScatteringFactor(float NewValue) {
}

void USkyAtmosphereComponent::SetMieScatteringScale(float NewValue) {
}

void USkyAtmosphereComponent::SetMieScattering(FLinearColor NewValue) {
}

void USkyAtmosphereComponent::SetMieExponentialDistribution(float NewValue) {
}

void USkyAtmosphereComponent::SetMieAnisotropy(float NewValue) {
}

void USkyAtmosphereComponent::SetMieAbsorptionScale(float NewValue) {
}

void USkyAtmosphereComponent::SetMieAbsorption(FLinearColor NewValue) {
}

void USkyAtmosphereComponent::SetHeightFogContribution(float NewValue) {
}

void USkyAtmosphereComponent::SetAtmosphereHeight(float NewValue) {
}

void USkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale(float NewValue) {
}

void USkyAtmosphereComponent::OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection) {
}

FLinearColor USkyAtmosphereComponent::GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight) {
    return FLinearColor{};
}


