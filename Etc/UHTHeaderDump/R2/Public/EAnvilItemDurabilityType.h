#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemDurabilityType.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemDurabilityType : uint8 {
    None,
    Default,
    Heat,
    DryingProgress,
};

