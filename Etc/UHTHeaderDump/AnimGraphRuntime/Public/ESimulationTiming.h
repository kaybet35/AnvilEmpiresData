#pragma once
#include "CoreMinimal.h"
#include "ESimulationTiming.generated.h"

UENUM(BlueprintType)
enum class ESimulationTiming : uint8 {
    Default,
    Synchronous,
    Deferred,
};

