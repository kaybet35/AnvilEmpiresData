#pragma once
#include "CoreMinimal.h"
#include "EMaterialFloatPrecisionMode.generated.h"

UENUM(BlueprintType)
enum EMaterialFloatPrecisionMode {
    MFPM_Default,
    MFPM_Full_MaterialExpressionOnly,
    MFPM_Full,
    MFPM_Half,
};

