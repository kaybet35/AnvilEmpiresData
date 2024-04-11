#pragma once
#include "CoreMinimal.h"
#include "EFBIKBoneLimitType.generated.h"

UENUM(BlueprintType)
enum class EFBIKBoneLimitType : uint8 {
    Free,
    Limit,
    Locked,
};

