#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMQuaternaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMQuaternaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMQuaternaryOp();
};

