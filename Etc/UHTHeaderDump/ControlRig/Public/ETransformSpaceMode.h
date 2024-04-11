#pragma once
#include "CoreMinimal.h"
#include "ETransformSpaceMode.generated.h"

UENUM(BlueprintType)
enum class ETransformSpaceMode : uint8 {
    LocalSpace,
    GlobalSpace,
    BaseSpace,
    BaseJoint,
    Max,
};

