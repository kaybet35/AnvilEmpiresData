#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorSign.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorSign();
};

