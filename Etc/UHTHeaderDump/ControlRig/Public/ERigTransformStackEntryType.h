#pragma once
#include "CoreMinimal.h"
#include "ERigTransformStackEntryType.generated.h"

UENUM(BlueprintType)
enum ERigTransformStackEntryType {
    TransformPose,
    ControlOffset,
    ControlShape,
    CurveValue,
};

