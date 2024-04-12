#pragma once
#include "CoreMinimal.h"
#include "EAnvilAccessibilityTestResult.generated.h"

UENUM(BlueprintType)
enum class EAnvilAccessibilityTestResult : uint8 {
    CanUse,
    AccessDeniedBelongsToEnemy,
    AccessDeniedMustBePledged,
    Error,
};

