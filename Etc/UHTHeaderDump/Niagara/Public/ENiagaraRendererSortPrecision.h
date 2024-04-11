#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererSortPrecision.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRendererSortPrecision : uint8 {
    Default,
    Low,
    High,
};

