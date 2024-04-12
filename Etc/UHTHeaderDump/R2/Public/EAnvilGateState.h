#pragma once
#include "CoreMinimal.h"
#include "EAnvilGateState.generated.h"

UENUM(BlueprintType)
enum class EAnvilGateState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
};

