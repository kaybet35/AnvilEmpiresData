#pragma once
#include "CoreMinimal.h"
#include "EAnvilAvatarType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAvatarType : uint8 {
    Default,
    Soldier,
    SupportSwordsman,
    SupportBowman,
    SupportSpearman,
    NumTypes,
};

