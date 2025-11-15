#include "ExponentialHeightFogComponent.h"

UExponentialHeightFogComponent::UExponentialHeightFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogDensity = 0.02f;
    this->FogHeightFalloff = 0.20f;
    this->InscatteringColorCubemap = NULL;
    this->InscatteringColorCubemapAngle = 0.00f;
    this->FullyDirectionalInscatteringColorDistance = 100000.00f;
    this->NonDirectionalInscatteringColorDistance = 1000.00f;
    this->DirectionalInscatteringExponent = 4.00f;
    this->DirectionalInscatteringStartDistance = 10000.00f;
    this->FogMaxOpacity = 1.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.20f;
    this->VolumetricFogExtinctionScale = 1.00f;
    this->VolumetricFogDistance = 6000.00f;
    this->VolumetricFogStartDistance = 0.00f;
    this->VolumetricFogNearFadeInDistance = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity = 1.00f;
    this->bOverrideLightColorsWithFogInscatteringColors = false;
}

void UExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float NewValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float NewValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogEmissive(FLinearColor NewValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogDistance(float NewValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogAlbedo(FColor NewValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
}

void UExponentialHeightFogComponent::SetStartDistance(float Value) {
}

void UExponentialHeightFogComponent::SetSecondFogHeightOffset(float Value) {
}

void UExponentialHeightFogComponent::SetSecondFogHeightFalloff(float Value) {
}

void UExponentialHeightFogComponent::SetSecondFogDensity(float Value) {
}

void UExponentialHeightFogComponent::SetSecondFogData(FExponentialHeightFogData NewValue) {
}

void UExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
}

void UExponentialHeightFogComponent::SetInscatteringTextureTint(FLinearColor Value) {
}

void UExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
}

void UExponentialHeightFogComponent::SetInscatteringColorCubemap(UTextureCube* Value) {
}

void UExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
}

void UExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
}

void UExponentialHeightFogComponent::SetFogInscatteringColor(FLinearColor Value) {
}

void UExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
}

void UExponentialHeightFogComponent::SetFogDensity(float Value) {
}

void UExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringColor(FLinearColor Value) {
}


