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
    SpecialBuildVolume,
    WorldBorder,
    Landscape,
    Projectile,
    Vehicle,
    MeshVisibility,
    Shield,
    LargeRock,
    Water,
    Animal,
    MarketArea,
    Foundation,
    Snapping,
    Fire,
    MouseInteraction,
    Industry,
    BorderRegion,
    FamilyArea,
    House,
    AnvilCollisionFoliage,
};

