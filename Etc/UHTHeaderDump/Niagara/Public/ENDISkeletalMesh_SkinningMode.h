#pragma once
#include "CoreMinimal.h"
#include "ENDISkeletalMesh_SkinningMode.generated.h"

UENUM(BlueprintType)
enum class ENDISkeletalMesh_SkinningMode : uint8 {
    Invalid = 255,
    None = 0,
    SkinOnTheFly,
    PreSkin,
};

