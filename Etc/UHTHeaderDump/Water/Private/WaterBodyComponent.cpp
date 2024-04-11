#include "WaterBodyComponent.h"

UWaterBodyComponent::UWaterBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalMaterial = NULL;
    this->TargetWaveMaskDepth = 2048.00f;
    this->MaxWaveHeightOffset = 0.00f;
    this->WaterMaterial = NULL;
    this->WaterHLODMaterial = NULL;
    this->WaterLODMaterial = NULL;
    this->UnderwaterPostProcessMaterial = NULL;
    this->ShapeDilation = 4096.00f;
    this->CollisionHeightOffset = 0.00f;
    this->bAffectsLandscape = true;
    this->WaterBodyIndex = -1;
    this->WaterMeshOverride = NULL;
    this->bAlwaysGenerateWaterMeshTiles = false;
    this->OverlapMaterialPriority = 0;
    this->WaterSplineMetadata = NULL;
    this->WaterMID = NULL;
    this->WaterLODMID = NULL;
    this->UnderwaterPostProcessMID = NULL;
    this->WaterInfoMID = NULL;
    this->WaterNavAreaClass = NULL;
    this->FixedWaterDepth = 512.00f;
}

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial) {
}

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged) {
}

UWaterWavesBase* UWaterBodyComponent::GetWaterWaves() const {
    return NULL;
}

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey) const {
    return 0.0f;
}

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth) const {
}

UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance() {
    return NULL;
}

UMaterialInterface* UWaterBodyComponent::GetWaterMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance() {
    return NULL;
}

AWaterBody* UWaterBodyComponent::GetWaterBodyActor() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance() {
    return NULL;
}

TArray<UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents() const {
    return TArray<UPrimitiveComponent*>();
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance() {
    return NULL;
}

float UWaterBodyComponent::GetMaxWaveHeight() const {
    return 0.0f;
}

TArray<AWaterBodyIsland*> UWaterBodyComponent::GetIslands() const {
    return TArray<AWaterBodyIsland*>();
}

TArray<AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes() const {
    return TArray<AWaterBodyExclusionVolume*>();
}

TArray<UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents) const {
    return TArray<UPrimitiveComponent*>();
}


