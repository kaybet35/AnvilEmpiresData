#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMQuinaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMQuinaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMQuinaryOp();
};

