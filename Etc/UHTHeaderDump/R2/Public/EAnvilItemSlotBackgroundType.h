#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemSlotBackgroundType.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemSlotBackgroundType : uint8 {
    None,
    LeftHand,
    RightHand,
    PrimaryTool,
    SecondaryTool,
    Head,
    Body,
    Belt,
    AnimalEquipment,
    HeavyTool,
};

