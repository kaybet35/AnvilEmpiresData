#pragma once
#include "CoreMinimal.h"
#include "EAnvilUnderworldModuleEdgeType.generated.h"

UENUM(BlueprintType)
enum class EAnvilUnderworldModuleEdgeType : uint8 {
    Left,
    Up,
    Right,
    Down,
    NumTypes,
};

