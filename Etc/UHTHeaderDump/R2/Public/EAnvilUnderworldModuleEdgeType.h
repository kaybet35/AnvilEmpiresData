#pragma once
#include "CoreMinimal.h"
#include "EAnvilUnderworldModuleEdgeType.generated.h"

UENUM(BlueprintType)
enum class EAnvilUnderworldModuleEdgeType : uint8 {
    NegativeY,
    PositiveX,
    PositiveY,
    NegativeX,
    NumTypes,
};

