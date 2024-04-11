#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStructConversionType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraStructConversionType : uint8 {
    CopyOnly,
    DoubleToFloat,
    Vector2,
    Vector3,
    Vector4,
    Quat,
};

