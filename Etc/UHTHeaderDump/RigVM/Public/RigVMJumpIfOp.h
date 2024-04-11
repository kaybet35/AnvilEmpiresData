#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMJumpIfOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMJumpIfOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    FRigVMJumpIfOp();
};

