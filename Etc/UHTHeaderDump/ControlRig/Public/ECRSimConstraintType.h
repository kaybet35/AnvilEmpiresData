#pragma once
#include "CoreMinimal.h"
#include "ECRSimConstraintType.generated.h"

UENUM(BlueprintType)
enum class ECRSimConstraintType : uint8 {
    Distance,
    DistanceFromA,
    DistanceFromB,
    Plane,
};

