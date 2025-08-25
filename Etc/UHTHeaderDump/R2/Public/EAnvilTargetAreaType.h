#pragma once
#include "CoreMinimal.h"
#include "EAnvilTargetAreaType.generated.h"

UENUM(BlueprintType)
enum class EAnvilTargetAreaType : uint8 {
    None,
    Main,
    Sail,
    ShipFrontLeft,
    ShipFrontRight,
    ShipBackLeft,
    ShipBackRight,
    NumTypes,
};

