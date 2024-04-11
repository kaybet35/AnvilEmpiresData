#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryQuaternionOp.h"
#include "RigUnit_MultiplyQuaternion.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp {
    GENERATED_BODY()
public:
    FRigUnit_MultiplyQuaternion();
};

