#include "WaterBody.h"
#include "WaterBodyRiverComponent.h"
#include "WaterSplineComponent.h"
#include "WaterSplineMetadata.h"

AWaterBody::AWaterBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWaterBodyRiverComponent>(TEXT("WaterBodyRiverComponent"));
    this->SplineComp = CreateDefaultSubobject<UWaterSplineComponent>(TEXT("WaterSpline"));
    this->WaterSplineMetadata = CreateDefaultSubobject<UWaterSplineMetadata>(TEXT("WaterSplineMetadata"));
    this->WaterBodyComponent = (UWaterBodyComponent*)RootComponent;
    this->WaterBodyIndex = -1;
    this->WaterBodyType = EWaterBodyType::River;
    this->WaterWaves = NULL;
}

void AWaterBody::SetWaterWaves(UWaterWavesBase* InWaterWaves) {
}

void AWaterBody::SetWaterMaterial(UMaterialInterface* InMaterial) {
}

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged) {
}

FVector AWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey) const {
    return FVector{};
}

float AWaterBody::GetWaterVelocityAtSplineInputKey(float InKey) const {
    return 0.0f;
}

UWaterSplineComponent* AWaterBody::GetWaterSpline() const {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance() {
    return NULL;
}

EWaterBodyType AWaterBody::GetWaterBodyType() const {
    return EWaterBodyType::River;
}

UWaterBodyComponent* AWaterBody::GetWaterBodyComponent() const {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance() {
    return NULL;
}

TArray<AWaterBodyIsland*> AWaterBody::GetIslands() const {
    return TArray<AWaterBodyIsland*>();
}

TArray<AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes() const {
    return TArray<AWaterBodyExclusionVolume*>();
}

float AWaterBody::GetAudioIntensityAtSplineInputKey(float InKey) const {
    return 0.0f;
}


