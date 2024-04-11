#pragma once
#include "CoreMinimal.h"
#include "TTSMessageState.generated.h"

UENUM(BlueprintType)
enum class TTSMessageState : uint8 {
    Playing,
    Enqueued,
};

