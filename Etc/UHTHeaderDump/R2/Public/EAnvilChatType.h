#pragma once
#include "CoreMinimal.h"
#include "EAnvilChatType.generated.h"

UENUM(BlueprintType)
enum class EAnvilChatType : uint8 {
    DataCommandList,
    DataPlayerList,
    Admin,
    Alert,
    WorldTeam,
    WorldTown,
    WorldFamily,
    Local,
    Team,
    NumTypes,
};

