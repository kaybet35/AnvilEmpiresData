#include "WaterRuntimeSettings.h"
#include "WaterBodyCustomComponent.h"
#include "WaterBodyLakeComponent.h"
#include "WaterBodyOceanComponent.h"
#include "WaterBodyRiverComponent.h"

UWaterRuntimeSettings::UWaterRuntimeSettings() {
    this->CollisionChannelForWaterTraces = ECC_WorldStatic;
    this->WaterBodyIconWorldZOffset = 75.00f;
    this->DefaultWaterCollisionProfileName = TEXT("WaterBodyCollision");
    this->WaterBodyRiverComponentClass = UWaterBodyRiverComponent::StaticClass();
    this->WaterBodyLakeComponentClass = UWaterBodyLakeComponent::StaticClass();
    this->WaterBodyOceanComponentClass = UWaterBodyOceanComponent::StaticClass();
    this->WaterBodyCustomComponentClass = UWaterBodyCustomComponent::StaticClass();
}


