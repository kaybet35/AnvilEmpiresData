#pragma once
#include "CoreMinimal.h"
#include "EGameplayHint.generated.h"

UENUM(BlueprintType)
enum class EGameplayHint : uint8 {
    Homestead1,
    Homestead2,
    Homestead3,
    HomesteadComplete,
    HomesteadUpgrade1,
    HomesteadUpgrade2,
    HomesteadUpgrade3,
    HomesteadUpgradeComplete,
    SettlementCore1,
    SettlementCore2,
    SettlementCore3,
    SettlementCoreComplete,
    Part2,
    NumGameplayHintTypes,
};

