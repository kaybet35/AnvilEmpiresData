#pragma once
#include "CoreMinimal.h"
#include "EHierarchicalSimplificationMethod.generated.h"

UENUM(BlueprintType)
enum class EHierarchicalSimplificationMethod : uint8 {
    None,
    Merge,
    Simplify,
    Approximate,
};

