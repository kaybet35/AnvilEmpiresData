#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryAggregateOp.h"
#include "RigUnit_MathBoolAnd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolAnd();
};

