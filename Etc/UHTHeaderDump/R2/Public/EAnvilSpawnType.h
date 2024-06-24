#pragma once
#include "CoreMinimal.h"
#include "EAnvilSpawnType.generated.h"

UENUM(BlueprintType)
enum class EAnvilSpawnType : uint8 {
    Starter,
    FamilyArea,
    House,
    Tent,
    Bed,
    Town,
    None,
};

