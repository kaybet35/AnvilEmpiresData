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
    RampSpiralTop,
    RampSpiralBottom,
    WaterStart,
    WaterEnd,
    CanalStart,
    CanalEnd,
    CanalSideStart,
    PowerStart,
    PowerEnd,
    PowerRopeStart,
    PowerRopeEnd,
    PowerRopeIgnore,
    PowerConvertedAnvilStart,
    PowerConvertedAnvilEnd,
    PowerConvertedHeatStart,
    PowerConvertedHeatEnd,
    DebugPowerSource,
    NaturalWaterRequired,
    NaturalWaterOptional,
    PowerConvertedWoodChoppingStationStart,
    PowerConvertedWoodChoppingStationEnd,
    PowerConvertedSmashingPlateStart,
    PowerConvertedSmashingPlateEnd,
    PowerConvertedHandCrankStart,
    PowerConvertedHandCrankEnd,
};

