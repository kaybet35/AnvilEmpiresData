#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlayerVisEventType.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlayerVisEventType : uint8 {
    OnDeath,
    StatusMessage,
    PlacementStatus,
    ForceActivityState,
    ConfirmFamilyPledgeDialog,
    ConfirmHousePledgeDialog,
    RequestToJoinFamily,
    InviteToJoinFamily,
    CreateDebugMapPost,
    VictoryInfoUpdate,
    UnderworldDebugInfoTargetSequence,
};

