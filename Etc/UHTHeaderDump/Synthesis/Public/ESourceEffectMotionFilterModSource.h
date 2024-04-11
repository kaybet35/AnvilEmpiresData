#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterModSource.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectMotionFilterModSource : uint8 {
    DistanceFromListener,
    SpeedRelativeToListener,
    SpeedOfSourceEmitter,
    SpeedOfListener,
    SpeedOfAngleDelta,
    Count,
};

