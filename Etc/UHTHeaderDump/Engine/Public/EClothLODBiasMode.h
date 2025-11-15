#pragma once
#include "CoreMinimal.h"
#include "EClothLODBiasMode.generated.h"

UENUM(BlueprintType)
enum class EClothLODBiasMode : uint8 {
    MappingsToSameLOD,
    MappingsToMinLOD,
    MappingsToAnyLOD,
};

