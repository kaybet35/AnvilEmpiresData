#pragma once
#include "CoreMinimal.h"
#include "ConnectionState.generated.h"

UENUM(BlueprintType)
enum class ConnectionState : uint8 {
    Disconnected,
    Connecting,
    Connected,
    Disconnecting,
};

