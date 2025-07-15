#pragma once
#include "CoreMinimal.h"
#include "EAnvilDamageTargetType.generated.h"

UENUM(BlueprintType)
enum class EAnvilDamageTargetType : uint8 {
    Default,
    Infantry,
    Horse,
    Structure,
    Fire,
    Vehicle,
    LightStructure,
    Animal,
    NumTypes,
};

