#pragma once
#include "CoreMinimal.h"
#include "EPingAverageType.generated.h"

UENUM(BlueprintType)
enum class EPingAverageType : uint8 {
    None,
    MovingAverage,
    PlayerStateAvg,
};

