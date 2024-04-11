#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryFloatOp.h"
#include "RigUnit_Subtract_FloatFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp {
    GENERATED_BODY()
public:
    FRigUnit_Subtract_FloatFloat();
};

