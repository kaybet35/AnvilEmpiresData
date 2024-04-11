#pragma once
#include "CoreMinimal.h"
#include "EEulerRotationOrder.generated.h"

UENUM(BlueprintType)
enum class EEulerRotationOrder : uint8 {
    XYZ,
    XZY,
    YXZ,
    YZX,
    ZXY,
    ZYX,
};

