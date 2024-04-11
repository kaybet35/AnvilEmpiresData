#pragma once
#include "CoreMinimal.h"
#include "ETypedElementChildInclusionMethod.generated.h"

UENUM(BlueprintType)
enum class ETypedElementChildInclusionMethod : uint8 {
    None,
    Immediate,
    Recursive,
};

