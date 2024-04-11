#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorDiv.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorDiv();
};

