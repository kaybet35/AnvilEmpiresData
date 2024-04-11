#pragma once
#include "CoreMinimal.h"
#include "EAnvilDamageType.generated.h"

UENUM(BlueprintType)
enum class EAnvilDamageType : uint8 {
    Default,
    Slashing,
    Piercing,
    Missile,
    Siege,
    Water,
    Bleed,
    Decay,
    Admin,
    NumTypes,
};

