#pragma once
#include "CoreMinimal.h"
#include "ERigSpaceType.generated.h"

UENUM(BlueprintType)
enum class ERigSpaceType : uint8 {
    Global,
    Bone,
    Control,
    Space,
};

