#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.generated.h"

UENUM(BlueprintType)
enum class ERigElementType : uint8 {
    None,
    Bone,
    Null,
    Space = Null,
    Control = 4,
    Curve = 8,
    RigidBody = 16,
    Reference = 32,
    Last = 64,
    All = 63,
    ToResetAfterConstructionEvent = 13,
};

