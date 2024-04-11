#pragma once
#include "CoreMinimal.h"
#include "ECRSimPointIntegrateType.generated.h"

UENUM(BlueprintType)
enum class ECRSimPointIntegrateType : uint8 {
    Verlet,
    SemiExplicitEuler,
};

