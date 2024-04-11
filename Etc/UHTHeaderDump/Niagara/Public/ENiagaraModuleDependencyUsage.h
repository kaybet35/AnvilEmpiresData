#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyUsage.generated.h"

UENUM(BlueprintType)
enum class ENiagaraModuleDependencyUsage : uint8 {
    None,
    Spawn,
    Update,
    Event,
    SimulationStage,
};

