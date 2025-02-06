#pragma once
#include "CoreMinimal.h"
#include "EAnvilSignPostVisualType.generated.h"

UENUM(BlueprintType)
enum class EAnvilSignPostVisualType : uint8 {
    Directional,
    Board,
    Post,
    NumTypes,
};

