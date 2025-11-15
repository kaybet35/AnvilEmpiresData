#pragma once
#include "CoreMinimal.h"
#include "ETransformCurveChannel.generated.h"

UENUM(BlueprintType)
enum class ETransformCurveChannel : uint8 {
    Position,
    Rotation,
    Scale,
    Invalid,
};

