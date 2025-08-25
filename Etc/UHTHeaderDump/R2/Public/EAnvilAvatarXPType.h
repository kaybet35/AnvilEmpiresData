#pragma once
#include "CoreMinimal.h"
#include "EAnvilAvatarXPType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAvatarXPType : uint8 {
    Attack,
    Gather,
    GatherFish,
    Work,
    Build,
    Repair,
    NumTypes,
};

