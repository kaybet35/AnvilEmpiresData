#pragma once
#include "CoreMinimal.h"
#include "ERigVMOpCode.h"
#include "RigVMInstruction.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMInstruction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ByteCodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMOpCode OpCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OperandAlignment;
    
    FRigVMInstruction();
};

