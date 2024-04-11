#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeEntry.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMByteCodeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstructionIndex;
    
    FRigVMByteCodeEntry();
};

