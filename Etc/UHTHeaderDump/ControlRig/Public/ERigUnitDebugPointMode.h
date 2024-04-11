#pragma once
#include "CoreMinimal.h"
#include "ERigUnitDebugPointMode.generated.h"

UENUM(BlueprintType)
enum class ERigUnitDebugPointMode : uint8 {
    Point,
    Vector,
    Max,
};

