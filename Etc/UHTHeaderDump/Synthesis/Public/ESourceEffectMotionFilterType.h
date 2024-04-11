#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterType.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectMotionFilterType : uint8 {
    LowPass,
    HighPass,
    BandPass,
    BandStop,
    Count,
};

