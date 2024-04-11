#pragma once
#include "CoreMinimal.h"
#include "EAnvilAccessibilityType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAccessibilityType : uint8 {
    FriendlyOnly,
    ResidentsOnly,
    EnemyCanPlunder,
    AllCanUse,
    NumTypes,
};

