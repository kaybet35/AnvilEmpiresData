#pragma once
#include "CoreMinimal.h"
#include "EPBIKLimitType.generated.h"

UENUM(BlueprintType)
enum class EPBIKLimitType : uint8 {
    Free,
    Limited,
    Locked,
};

