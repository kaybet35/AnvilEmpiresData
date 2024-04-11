#pragma once
#include "CoreMinimal.h"
#include "QueueStatusType.generated.h"

UENUM(BlueprintType)
enum class QueueStatusType : uint8 {
    NotQueued,
    Queued,
    RequestServerConnection,
};

