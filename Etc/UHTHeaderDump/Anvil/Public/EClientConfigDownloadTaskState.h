#pragma once
#include "CoreMinimal.h"
#include "EClientConfigDownloadTaskState.generated.h"

UENUM(BlueprintType)
enum class EClientConfigDownloadTaskState : uint8 {
    NotStarted,
    Completed,
    InProgress,
};

