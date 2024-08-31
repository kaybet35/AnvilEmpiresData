#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlayerOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlayerOnlineStatus : uint8 {
    Online,
    Offline,
    Deployed,
    Num,
};

