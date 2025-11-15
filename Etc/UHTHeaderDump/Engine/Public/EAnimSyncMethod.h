#pragma once
#include "CoreMinimal.h"
#include "EAnimSyncMethod.generated.h"

UENUM(BlueprintType)
enum class EAnimSyncMethod : uint8 {
    DoNotSync,
    SyncGroup,
    Graph,
};

