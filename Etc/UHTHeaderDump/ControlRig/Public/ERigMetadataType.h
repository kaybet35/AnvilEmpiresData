#pragma once
#include "CoreMinimal.h"
#include "ERigMetadataType.generated.h"

UENUM(BlueprintType)
enum class ERigMetadataType : uint8 {
    Bool,
    BoolArray,
    Float,
    FloatArray,
    Int32,
    Int32Array,
    Name,
    NameArray,
    Vector,
    VectorArray,
    Rotator,
    RotatorArray,
    Quat,
    QuatArray,
    Transform,
    TransformArray,
    LinearColor,
    LinearColorArray,
    RigElementKey,
    RigElementKeyArray,
    Invalid,
};

