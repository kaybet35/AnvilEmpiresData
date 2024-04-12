#pragma once
#include "CoreMinimal.h"
#include "EAnvilSnappingChannelType.generated.h"

UENUM(BlueprintType)
enum class EAnvilSnappingChannelType : uint8 {
    General,
    Wall,
    Road,
    RoadSide,
    Platform,
    Foundation,
    WaterStart,
    WaterEnd,
    CanalStart,
    CanalEnd,
    CanalSideStart,
    PowerStart,
    PowerEnd,
    PowerConvertedAnvilStart,
    PowerConvertedAnvilEnd,
    PowerConvertedHeatStart,
    PowerConvertedHeatEnd,
    DebugPowerSource,
    NaturalWaterRequired,
    NaturalWaterOptional,
    PowerConvertedWoodChoppingStationStart,
    PowerConvertedWoodChoppingStationEnd,
};

