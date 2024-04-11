#pragma once
#include "CoreMinimal.h"
#include "EMappingQueryResult.generated.h"

UENUM(BlueprintType)
enum class EMappingQueryResult : uint8 {
    Error_EnhancedInputNotEnabled,
    Error_InputContextNotInActiveContexts,
    Error_InvalidAction,
    NotMappable,
    MappingAvailable,
};

