#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeUpdateResultFlags.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeUpdateResultFlags : uint8 {
    ApplyAsAbsolute = 1,
    SkipAutoScale,
    SkipAutoPlaySpace = 4,
    Default = 0,
};

