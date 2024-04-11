#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntDiv.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntDiv();
};

