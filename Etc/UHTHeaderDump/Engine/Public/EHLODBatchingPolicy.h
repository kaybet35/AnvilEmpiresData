#pragma once
#include "CoreMinimal.h"
#include "EHLODBatchingPolicy.generated.h"

UENUM(BlueprintType)
enum class EHLODBatchingPolicy : uint8 {
    None,
    MeshSection,
    Instancing,
};

