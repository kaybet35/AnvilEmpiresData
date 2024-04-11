#pragma once
#include "CoreMinimal.h"
#include "EInputMappingRebuildType.generated.h"

UENUM(BlueprintType)
enum class EInputMappingRebuildType : uint8 {
    None,
    Rebuild,
    RebuildWithFlush,
};

