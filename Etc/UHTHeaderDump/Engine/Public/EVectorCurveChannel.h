#pragma once
#include "CoreMinimal.h"
#include "EVectorCurveChannel.generated.h"

UENUM(BlueprintType)
enum class EVectorCurveChannel : uint8 {
    X,
    Y,
    Z,
    Invalid,
};

