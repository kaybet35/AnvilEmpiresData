#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMBinaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMBinaryOp();
};

