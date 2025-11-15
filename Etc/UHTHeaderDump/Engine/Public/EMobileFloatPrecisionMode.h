#pragma once
#include "CoreMinimal.h"
#include "EMobileFloatPrecisionMode.generated.h"

UENUM(BlueprintType)
namespace EMobileFloatPrecisionMode {
    enum Type {
        Half,
        Full_MaterialExpressionOnly,
        Full,
    };
}

