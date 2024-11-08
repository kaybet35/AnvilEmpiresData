#pragma once
#include "CoreMinimal.h"
#include "EAnvilMapPostType.generated.h"

UENUM(BlueprintType)
enum class EAnvilMapPostType : uint8 {
    DefendLocation,
    AttackLocation,
    EnemiesLocation,
    FortifyLocation,
    NeedHelp,
    NeedSupplies,
    LookHere,
    NumTypes,
};

