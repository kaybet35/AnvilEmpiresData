#pragma once
#include "CoreMinimal.h"
#include "ETextureUniversalTiling.generated.h"

UENUM(BlueprintType)
enum class ETextureUniversalTiling : uint8 {
    Disabled,
    Enabled_256KB,
    Enabled_64KB,
};

