#pragma once
#include "CoreMinimal.h"
#include "EAnvilUsePromptType.generated.h"

UENUM(BlueprintType)
enum class EAnvilUsePromptType : uint8 {
    PickupItem,
    Plunder,
    UseEntity,
    DropLargeItem,
    Mount,
    Repair,
    Gate,
    Feed,
    Gathering,
    SwitchSeat,
    SiegeTowerRamp,
    NumTypes,
};

