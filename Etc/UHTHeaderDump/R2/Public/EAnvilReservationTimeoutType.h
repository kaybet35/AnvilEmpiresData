#pragma once
#include "CoreMinimal.h"
#include "EAnvilReservationTimeoutType.generated.h"

UENUM(BlueprintType)
enum class EAnvilReservationTimeoutType : uint8 {
    Login,
    BorderTravelReturn,
    UnderworldTravelReturn,
};

