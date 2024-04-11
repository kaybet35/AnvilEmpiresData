#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Divide_VectorVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    FRigUnit_Divide_VectorVector();
};

