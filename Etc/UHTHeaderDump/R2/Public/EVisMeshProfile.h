#pragma once
#include "CoreMinimal.h"
#include "EVisMeshProfile.generated.h"

UENUM(BlueprintType)
enum class EVisMeshProfile : uint8 {
    Undefined,
    Structure,
    StructureLandscape,
    StructureLandscapeRotate,
    StructureCollision,
    StructureCollisionLandscape,
    StructureCollisionLandscapeRotate,
};

