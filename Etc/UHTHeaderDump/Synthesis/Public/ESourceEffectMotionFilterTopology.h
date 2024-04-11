#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterTopology.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectMotionFilterTopology : uint8 {
    SerialMode,
    ParallelMode,
    Count,
};

