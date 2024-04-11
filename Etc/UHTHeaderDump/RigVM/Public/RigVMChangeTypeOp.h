#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMChangeTypeOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMChangeTypeOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    FRigVMChangeTypeOp();
};

