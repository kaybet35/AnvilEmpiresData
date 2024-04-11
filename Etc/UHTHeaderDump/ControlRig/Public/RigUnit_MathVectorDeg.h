#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorDeg.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorDeg();
};

