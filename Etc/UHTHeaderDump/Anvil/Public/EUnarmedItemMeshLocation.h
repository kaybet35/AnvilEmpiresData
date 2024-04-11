#pragma once
#include "CoreMinimal.h"
#include "EUnarmedItemMeshLocation.generated.h"

UENUM(BlueprintType)
enum class EUnarmedItemMeshLocation : uint8 {
    None,
    MidLeft,
    MidRight,
    Back1,
    Back2,
};

