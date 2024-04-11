#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMInvokeEntryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMInvokeEntryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMInvokeEntryOp();
};

