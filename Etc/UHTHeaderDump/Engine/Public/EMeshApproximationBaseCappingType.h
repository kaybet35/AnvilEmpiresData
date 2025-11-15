#pragma once
#include "CoreMinimal.h"
#include "EMeshApproximationBaseCappingType.generated.h"

UENUM(BlueprintType)
enum class EMeshApproximationBaseCappingType : uint8 {
    NoBaseCapping,
    ConvexPolygon,
    ConvexSolid,
};

