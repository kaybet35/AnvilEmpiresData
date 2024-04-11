#pragma once
#include "CoreMinimal.h"
#include "EConstraintPlasticityType.generated.h"

UENUM(BlueprintType)
enum EConstraintPlasticityType {
    CCPT_Free,
    CCPT_Shrink,
    CCPT_Grow,
};

