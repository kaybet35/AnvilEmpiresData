#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimStageExecuteBehavior.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSimStageExecuteBehavior : uint8 {
    Always,
    OnSimulationReset,
    NotOnSimulationReset,
};

