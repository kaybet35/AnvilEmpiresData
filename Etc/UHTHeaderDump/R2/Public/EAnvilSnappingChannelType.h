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
    PowerConvertedHitStart,
    PowerConvertedHitEnd,
    PowerConvertedHeatStart,
    PowerConvertedHeatEnd,
    DebugPowerSource,
    NaturalWaterRequired,
    NaturalWaterOptional,
};

