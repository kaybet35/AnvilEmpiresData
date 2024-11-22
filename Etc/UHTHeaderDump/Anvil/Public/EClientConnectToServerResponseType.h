#pragma once
#include "CoreMinimal.h"
#include "EClientConnectToServerResponseType.generated.h"

UENUM(BlueprintType)
enum class EClientConnectToServerResponseType : uint8 {
    Error,
    ServerNotConnected,
    Queued,
    AuthFailed,
    AllowedToJoin,
    PromptToJoinAdminQueue,
    VersionMismatch,
    InvalidParams,
};

