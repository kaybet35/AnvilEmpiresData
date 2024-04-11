#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorFloor.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorFloor();
};

