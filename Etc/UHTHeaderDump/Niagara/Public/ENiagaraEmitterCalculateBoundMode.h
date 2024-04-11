#pragma once
#include "CoreMinimal.h"
#include "ENiagaraEmitterCalculateBoundMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraEmitterCalculateBoundMode : uint8 {
    Dynamic,
    Fixed,
    Programmable,
};

