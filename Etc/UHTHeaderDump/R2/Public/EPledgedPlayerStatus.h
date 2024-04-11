#pragma once
#include "CoreMinimal.h"
#include "EPledgedPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPledgedPlayerStatus : uint8 {
    NONE,
    COMMONER,
    CITIZEN,
    NOBLE,
    OFFICIAL,
    FOUNDER,
};

