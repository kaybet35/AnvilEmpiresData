#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeReferenceConversionResult.generated.h"

UENUM(BlueprintType)
enum class EAnimNodeReferenceConversionResult : uint8 {
    Succeeded = 1,
    Failed = 0,
};

