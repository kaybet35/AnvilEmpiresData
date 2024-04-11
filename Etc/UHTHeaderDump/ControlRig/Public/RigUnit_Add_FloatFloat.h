#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryFloatOp.h"
#include "RigUnit_Add_FloatFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp {
    GENERATED_BODY()
public:
    FRigUnit_Add_FloatFloat();
};

