#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Subtract_VectorVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    FRigUnit_Subtract_VectorVector();
};

