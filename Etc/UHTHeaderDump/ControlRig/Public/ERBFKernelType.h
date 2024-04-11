#pragma once
#include "CoreMinimal.h"
#include "ERBFKernelType.generated.h"

UENUM(BlueprintType)
enum class ERBFKernelType : uint8 {
    Gaussian,
    Exponential,
    Linear,
    Cubic,
    Quintic,
};

