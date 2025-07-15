#pragma once
#include "CoreMinimal.h"
#include "EAnvilVehicleMovementPlayerInteractionType.generated.h"

UENUM(BlueprintType)
enum class EAnvilVehicleMovementPlayerInteractionType : uint8 {
    Ignore,
    Block,
    BlockIfMaxGuard,
    NumTypes,
};

