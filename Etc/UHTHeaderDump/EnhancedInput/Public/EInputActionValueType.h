#pragma once
#include "CoreMinimal.h"
#include "EInputActionValueType.generated.h"

UENUM(BlueprintType)
enum class EInputActionValueType : uint8 {
    Boolean,
    Axis1D,
    Axis2D,
    Axis3D,
};

