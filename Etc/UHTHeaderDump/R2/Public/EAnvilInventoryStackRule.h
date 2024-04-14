#pragma once
#include "CoreMinimal.h"
#include "EAnvilInventoryStackRule.generated.h"

UENUM(BlueprintType)
enum class EAnvilInventoryStackRule : uint8 {
    Default,
    ForceStackNonLargeItems,
    ForceStackAllItems,
};

