#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSource.generated.h"

UENUM(BlueprintType)
enum class FNiagaraCompileEventSource : uint8 {
    Unset,
    ScriptDependency,
};

