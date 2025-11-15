#pragma once
#include "CoreMinimal.h"
#include "ELevelInstanceCreationType.generated.h"

UENUM(BlueprintType)
enum class ELevelInstanceCreationType : uint8 {
    LevelInstance,
    PackedLevelActor,
};

