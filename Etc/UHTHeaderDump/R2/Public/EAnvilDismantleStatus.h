#pragma once
#include "CoreMinimal.h"
#include "EAnvilDismantleStatus.generated.h"

UENUM(BlueprintType)
enum class EAnvilDismantleStatus : uint8 {
    Success,
    CannotBeDismantled,
    NoPermission,
    OverTimeLimit,
    EnemiesNearby,
};

