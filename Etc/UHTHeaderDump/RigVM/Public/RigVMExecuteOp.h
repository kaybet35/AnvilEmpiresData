#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMExecuteOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMExecuteOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMExecuteOp();
};

