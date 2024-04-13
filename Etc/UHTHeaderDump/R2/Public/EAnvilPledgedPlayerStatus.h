#pragma once
#include "CoreMinimal.h"
#include "EAnvilPledgedPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EAnvilPledgedPlayerStatus : uint8 {
    None,
    Commoner,
    Citizen,
    Noble,
    Official,
    Founder,
    Lord,
    Num,
};

