#pragma once
#include "CoreMinimal.h"
#include "ERigUnitVisualDebugPointMode.generated.h"

UENUM(BlueprintType)
enum class ERigUnitVisualDebugPointMode : uint8 {
    Point,
    Vector,
    Max,
};

