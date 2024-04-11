#pragma once
#include "CoreMinimal.h"
#include "EPledgedOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EPledgedOnlineStatus : uint8 {
    Online,
    Offline,
    Deployed,
    Num,
};

