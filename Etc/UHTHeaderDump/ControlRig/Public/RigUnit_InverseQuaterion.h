#pragma once
#include "CoreMinimal.h"
#include "RigUnit_UnaryQuaternionOp.h"
#include "RigUnit_InverseQuaterion.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp {
    GENERATED_BODY()
public:
    FRigUnit_InverseQuaterion();
};

