#pragma once
#include "CoreMinimal.h"
#include "ESequenceTimeUnit.generated.h"

UENUM(BlueprintType)
enum class ESequenceTimeUnit : uint8 {
    DisplayRate,
    TickResolution,
};

