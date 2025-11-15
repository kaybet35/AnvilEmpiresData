#pragma once
#include "CoreMinimal.h"
#include "ERootMotionSourceSettingsFlags.generated.h"

UENUM(BlueprintType)
enum class ERootMotionSourceSettingsFlags : uint8 {
    UseSensitiveLiftoffCheck = 1,
    DisablePartialEndTick,
    IgnoreZAccumulate = 4,
};

