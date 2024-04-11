#pragma once
#include "CoreMinimal.h"
#include "ERigControlType.generated.h"

UENUM(BlueprintType)
enum class ERigControlType : uint8 {
    Bool,
    Float,
    Integer,
    Vector2D,
    Position,
    Scale,
    Rotator,
    Transform,
    TransformNoScale,
    EulerTransform,
};

