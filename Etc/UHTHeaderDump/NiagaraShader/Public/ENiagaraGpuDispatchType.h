#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuDispatchType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraGpuDispatchType : uint8 {
    OneD,
    TwoD,
    ThreeD,
    Custom,
};

