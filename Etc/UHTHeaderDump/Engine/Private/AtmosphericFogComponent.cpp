#include "AtmosphericFogComponent.h"
#include "ESkyAtmosphereTransformMode.h"

UAtmosphericFogComponent::UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform;
}

void UAtmosphericFogComponent::SetSunMultiplier(float NewSunMultiplier) {
}

void UAtmosphericFogComponent::SetStartDistance(float NewStartDistance) {
}

void UAtmosphericFogComponent::SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum) {
}

void UAtmosphericFogComponent::SetFogMultiplier(float NewFogMultiplier) {
}

void UAtmosphericFogComponent::SetDistanceScale(float NewDistanceScale) {
}

void UAtmosphericFogComponent::SetDistanceOffset(float NewDistanceOffset) {
}

void UAtmosphericFogComponent::SetDensityOffset(float NewDensityOffset) {
}

void UAtmosphericFogComponent::SetDensityMultiplier(float NewDensityMultiplier) {
}

void UAtmosphericFogComponent::SetDefaultLightColor(FLinearColor NewLightColor) {
}

void UAtmosphericFogComponent::SetDefaultBrightness(float NewBrightness) {
}

void UAtmosphericFogComponent::SetAltitudeScale(float NewAltitudeScale) {
}

void UAtmosphericFogComponent::DisableSunDisk(bool NewSunDisk) {
}

void UAtmosphericFogComponent::DisableGroundScattering(bool NewGroundScattering) {
}


