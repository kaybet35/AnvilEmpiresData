#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorCeil.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorCeil();
};

