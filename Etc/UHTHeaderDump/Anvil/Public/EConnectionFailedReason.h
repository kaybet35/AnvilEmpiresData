#pragma once
#include "CoreMinimal.h"
#include "EConnectionFailedReason.generated.h"

UENUM(BlueprintType)
enum class EConnectionFailedReason : uint8 {
    AnvilServiceConnectionFailed,
    AnvilServiceConnectTokenResponseError,
    AnvilServiceNotQueued,
    R2ServerConnectionError,
    AnvilServiceVersionMismatch,
};

