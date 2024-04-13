#pragma once
#include "CoreMinimal.h"
#include "EAnvilTravelType.generated.h"

UENUM(BlueprintType)
enum class EAnvilTravelType : uint8 {
    None,
    BorderTravel,
    Reinforce,
    ReturnToPledgedTown,
};

