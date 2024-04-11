#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMSenaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMSenaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMSenaryOp();
};

