#pragma once
#include "CoreMinimal.h"
#include "EChatType.generated.h"

UENUM(BlueprintType)
enum class EChatType : uint8 {
    WORLD,
    WORLD_TEAM,
    LOCAL,
    TEAM,
    TOWN,
    ADMIN,
    ALERT,
    COMMAND_LIST,
    PLAYER_LIST,
};

