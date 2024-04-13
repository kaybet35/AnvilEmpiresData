#pragma once
#include "CoreMinimal.h"
#include "EAnvilPledgedOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EAnvilPledgedOnlineStatus : uint8 {
    Online,
    Offline,
    Deployed,
    Num,
};

