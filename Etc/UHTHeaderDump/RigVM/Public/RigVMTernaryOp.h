#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMTernaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMTernaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMTernaryOp();
};

