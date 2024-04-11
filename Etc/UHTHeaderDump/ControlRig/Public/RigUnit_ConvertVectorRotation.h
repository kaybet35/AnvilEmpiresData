#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ConvertRotation.h"
#include "RigUnit_ConvertVectorRotation.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation {
    GENERATED_BODY()
public:
    FRigUnit_ConvertVectorRotation();
};

