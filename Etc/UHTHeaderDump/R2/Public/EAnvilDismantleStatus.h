#pragma once
#include "CoreMinimal.h"
#include "EAnvilDismantleStatus.generated.h"

UENUM(BlueprintType)
enum class EAnvilDismantleStatus : uint8 {
    Success,
    VoteRegistered,
    TooSoonToVoteAgain,
    CannotBeDismantled,
    NoPermission,
    OverTimeLimit,
    EnemiesNearby,
    MustBeRepaired,
    MustBeEmpty,
};

