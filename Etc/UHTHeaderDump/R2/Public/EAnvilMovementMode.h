#pragma once
#include "CoreMinimal.h"
#include "EAnvilMovementMode.generated.h"

UENUM(BlueprintType)
enum class EAnvilMovementMode : uint8 {
    Walking,
    Flying,
    Swimming,
    NumTypes,
};

