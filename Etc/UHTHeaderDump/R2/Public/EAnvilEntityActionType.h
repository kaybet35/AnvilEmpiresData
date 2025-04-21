#pragma once
#include "CoreMinimal.h"
#include "EAnvilEntityActionType.generated.h"

UENUM(BlueprintType)
enum class EAnvilEntityActionType : uint8 {
    None,
    UpvoteSignPost,
    DownvoteSignPost,
    CancelVoteSignPost,
    RentStorehouse,
    ReleaseStorehouse,
    ExtendStorehouse,
    GotoSleep,
    LockToFamily,
    UnlockFamilyLock,
    AttachVehicle,
    DetachVehicle,
    RetractLadder,
    StartPowerMill,
    StopPowerMill,
    PledgeToTown,
    ReinforceStructure,
    RestrictedModeOn,
    RestrictedModeOff,
    NumTypes,
};

