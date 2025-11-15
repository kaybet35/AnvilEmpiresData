#pragma once
#include "CoreMinimal.h"
#include "EAnimExecutionContextConversionResult.generated.h"

UENUM(BlueprintType)
enum class EAnimExecutionContextConversionResult : uint8 {
    Succeeded = 1,
    Failed = 0,
};

