#pragma once
#include "CoreMinimal.h"
#include "EAnvilAvatarAttributeType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAvatarAttributeType : uint8 {
    Fitness,
    Combat,
    Smithing,
    Lumberjacking,
    Mining,
    Cooking,
    Farming,
    NumTypes,
    None,
};

