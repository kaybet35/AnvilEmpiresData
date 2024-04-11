#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlayerInputMode.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlayerInputMode : uint8 {
    Default,
    Building,
    RotatingStructure,
    Aiming,
    MouseSelect,
    NumTypes,
};

