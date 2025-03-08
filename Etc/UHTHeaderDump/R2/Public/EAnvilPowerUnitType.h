#pragma once
#include "CoreMinimal.h"
#include "EAnvilPowerUnitType.generated.h"

UENUM(BlueprintType)
enum class EAnvilPowerUnitType : uint8 {
    Pipe,
    Source,
    Sink,
};

