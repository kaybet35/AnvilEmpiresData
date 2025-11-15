#pragma once
#include "CoreMinimal.h"
#include "EPreferredTriangulationDirection.generated.h"

UENUM(BlueprintType)
enum class EPreferredTriangulationDirection : uint8 {
    None,
    Tangential,
    Radial,
};

