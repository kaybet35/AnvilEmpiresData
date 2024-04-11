#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushRoundingType.generated.h"

UENUM(BlueprintType)
namespace ESlateBrushRoundingType {
    enum Type {
        FixedRadius,
        HalfHeightRadius,
    };
}

