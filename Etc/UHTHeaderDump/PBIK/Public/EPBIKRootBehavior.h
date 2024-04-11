#pragma once
#include "CoreMinimal.h"
#include "EPBIKRootBehavior.generated.h"

UENUM(BlueprintType)
enum class EPBIKRootBehavior : uint8 {
    PrePull,
    PinToInput,
    Free,
};

