#pragma once
#include "CoreMinimal.h"
#include "EMeshApproximationSimplificationPolicy.generated.h"

UENUM(BlueprintType)
enum class EMeshApproximationSimplificationPolicy : uint8 {
    FixedTriangleCount,
    TrianglesPerArea,
    GeometricTolerance,
};

