#pragma once
#include "CoreMinimal.h"
#include "EAnvilPhysicalSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EAnvilPhysicalSurfaceType : uint8 {
    SurfaceTypeDefault,
    SurfaceTypeFlesh,
    SurfaceTypeGrass,
    SurfaceTypeWood,
    SurfaceTypeStone,
    SurfaceTypeLeather,
    SurfaceTypeIron,
    SurfaceTypeShield,
    SurfaceTypeShieldBreak,
    SurfaceTypeDirt,
    SurfaceTypeForest,
    SurfaceTypeRock,
    SurfaceTypeLake,
    SurfaceTypeGravel,
    SurfaceTypeRare,
    SurfaceTypeRoad,
    SurfaceTypeSand,
    SurfaceTypeNumTypes,
};

