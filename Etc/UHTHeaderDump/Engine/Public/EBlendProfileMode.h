#pragma once
#include "CoreMinimal.h"
#include "EBlendProfileMode.generated.h"

UENUM(BlueprintType)
enum class EBlendProfileMode : uint8 {
    TimeFactor,
    WeightFactor,
    BlendMask,
};

