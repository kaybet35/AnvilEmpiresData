#pragma once
#include "CoreMinimal.h"
#include "EConstraintInterpType.generated.h"

UENUM(BlueprintType)
enum class EConstraintInterpType : uint8 {
    Average,
    Shortest,
    Max,
};

