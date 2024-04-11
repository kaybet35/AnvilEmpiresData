#pragma once
#include "CoreMinimal.h"
#include "EAnvilVehicleInputState.generated.h"

UENUM(BlueprintType)
enum class EAnvilVehicleInputState : uint8 {
    Idle,
    Push,
    Pull,
    Charge,
    StrafeLeft,
    StrafeRight,
};

