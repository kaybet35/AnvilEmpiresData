#pragma once
#include "CoreMinimal.h"
#include "EFOVScalingType.generated.h"

UENUM(BlueprintType)
enum class EFOVScalingType : uint8 {
    Standard,
    UE4_BackCompat,
};

