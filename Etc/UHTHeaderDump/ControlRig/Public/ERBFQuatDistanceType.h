#pragma once
#include "CoreMinimal.h"
#include "ERBFQuatDistanceType.generated.h"

UENUM(BlueprintType)
enum class ERBFQuatDistanceType : uint8 {
    Euclidean,
    ArcLength,
    SwingAngle,
    TwistAngle,
};

