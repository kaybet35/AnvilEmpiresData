#pragma once
#include "CoreMinimal.h"
#include "EEquippedItemGripType.generated.h"

UENUM(BlueprintType)
enum class EEquippedItemGripType : uint8 {
    NoWeapon,
    LargeItem,
    Basket,
    OneHandedItem,
    Spear,
    CrateBarrel,
    Torch,
    LargeBoulder,
    Sword,
    BowAndArrow,
    Scythe,
    Shield,
    Axe,
    LargeArrow,
    Pike,
};

