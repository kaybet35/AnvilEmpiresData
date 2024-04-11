#pragma once
#include "CoreMinimal.h"
#include "ENiagaraValidationSeverity.generated.h"

UENUM(BlueprintType)
enum class ENiagaraValidationSeverity : uint8 {
    Info,
    Warning,
    Error,
};

