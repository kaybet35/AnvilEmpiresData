#pragma once
#include "CoreMinimal.h"
#include "EAnvilSiegeTowerState.generated.h"

UENUM(BlueprintType)
enum class EAnvilSiegeTowerState : uint8 {
    Close,
    Opening,
    Open,
    Closing,
    NumTypes,
};

