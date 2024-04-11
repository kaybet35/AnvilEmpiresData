#pragma once
#include "CoreMinimal.h"
#include "EInputAxisSwizzle.generated.h"

UENUM(BlueprintType)
enum class EInputAxisSwizzle : uint8 {
    YXZ,
    ZYX,
    XZY,
    YZX,
    ZXY,
};

