#pragma once
#include "CoreMinimal.h"
#include "EAnvilCollisionChannel.generated.h"

UENUM(BlueprintType)
enum class EAnvilCollisionChannel : uint8 {
    Static,
    Dynamic,
    Player,
    UseVolume,
    Resource,
    Pickup,
    Action,
    RoadVolume,
    BuildVolume,
    GateVolume,
    RangedAimBlocking,
    WorldBorder,
    Landscape,
    Projectile,
    Vehicle,
    MeshVisibility,
    Shield,
    LargeRock,
    Water,
    Animal,
    PassiveDamage,
    Foundation,
    Snapping,
    Fire,
    MouseInteraction,
    Industry,
    BorderRegion,
    VehicleBlocking,
    House,
    AnvilCollisionFoliage,
    NumTypes,
};

