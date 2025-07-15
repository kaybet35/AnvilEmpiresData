#pragma once
#include "CoreMinimal.h"
#include "EAnvilPhysicalSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EAnvilPhysicalSurfaceType : uint8 {
    Default,
    Flesh,
    Grass,
    Wood,
    Stone,
    Leather,
    Iron,
    Shield,
    ShieldBreak,
    Dirt,
    Forest,
    Rock,
    Lake,
    Gravel,
    Rare,
    Road,
    Sand,
    PlayerFlesh,
    NumTypes,
};

