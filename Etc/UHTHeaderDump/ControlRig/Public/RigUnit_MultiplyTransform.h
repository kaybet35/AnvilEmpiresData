#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryTransformOp.h"
#include "RigUnit_MultiplyTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp {
    GENERATED_BODY()
public:
    FRigUnit_MultiplyTransform();
};

