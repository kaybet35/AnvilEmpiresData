#pragma once
#include "CoreMinimal.h"
#include "EAnvilInputResponseType.generated.h"

UENUM(BlueprintType)
enum class EAnvilInputResponseType : uint8 {
    None,
    ToggleStructureUI,
    TogglePlayerInventory,
    CancelUI,
    StructureUpgradeFailed,
    ToggleBuildMenu,
    UnHandledInteract,
};

