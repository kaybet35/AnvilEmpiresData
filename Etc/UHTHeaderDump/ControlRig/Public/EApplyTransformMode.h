#pragma once
#include "CoreMinimal.h"
#include "EApplyTransformMode.generated.h"

UENUM(BlueprintType)
enum class EApplyTransformMode : uint8 {
    Override,
    Additive,
    Max,
};

