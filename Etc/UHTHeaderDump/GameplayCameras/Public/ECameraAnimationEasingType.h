#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimationEasingType.generated.h"

UENUM(BlueprintType)
enum class ECameraAnimationEasingType : uint8 {
    Linear,
    Sinusoidal,
    Quadratic,
    Cubic,
    Quartic,
    Quintic,
    Exponential,
    Circular,
};

