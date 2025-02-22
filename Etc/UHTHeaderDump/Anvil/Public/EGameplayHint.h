#pragma once
#include "CoreMinimal.h"
#include "EGameplayHint.generated.h"

UENUM(BlueprintType)
enum class EGameplayHint : uint8 {
    Homestead1,
    Homestead2,
    Homestead3,
    Homestead4,
    HomesteadComplete,
    HomesteadUpgrade1,
    HomesteadUpgrade2,
    HomesteadUpgrade3,
    HomesteadUpgradeComplete,
    Town1,
    Town2,
    Town3,
    Town4,
    TownComplete,
    Part2,
    NumGameplayHintTypes,
};

