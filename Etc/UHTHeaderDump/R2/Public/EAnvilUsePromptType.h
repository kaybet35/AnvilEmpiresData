#pragma once
#include "CoreMinimal.h"
#include "EAnvilUsePromptType.generated.h"

UENUM(BlueprintType)
enum class EAnvilUsePromptType : uint8 {
    None,
    PickupItem,
    Plunder,
    UseEntity = 4,
    DropLargeItem = 8,
    Mount = 16,
    Repair = 32,
    Gate = 64,
    Feed = 128,
};

