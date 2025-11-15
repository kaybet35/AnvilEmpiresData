#pragma once
#include "CoreMinimal.h"
#include "EConstraintTransformComponentFlags.generated.h"

UENUM(BlueprintType)
enum class EConstraintTransformComponentFlags : uint8 {
    None,
    ChildPosition,
    ChildRotation,
    ParentPosition = 4,
    ParentRotation = 8,
    AllChild = 3,
    AllParent = 12,
    AllPosition = 5,
    AllRotation = 10,
    All = 15,
};

