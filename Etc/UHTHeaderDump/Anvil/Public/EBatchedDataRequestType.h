#pragma once
#include "CoreMinimal.h"
#include "EBatchedDataRequestType.generated.h"

UENUM(BlueprintType)
enum class EBatchedDataRequestType : uint8 {
    CanPlayerJoinShard,
    GetProfileInfo,
    GetServerList,
    GetShardStatus,
    GetWinConditionState,
    GetPlayerFamily,
};

