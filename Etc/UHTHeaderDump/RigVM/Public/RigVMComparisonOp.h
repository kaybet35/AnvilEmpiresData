#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMComparisonOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMComparisonOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMComparisonOp();
};

