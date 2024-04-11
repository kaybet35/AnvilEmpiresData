#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMByteCodeStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstructionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataBytes;
    
    RIGVM_API FRigVMByteCodeStatistics();
};

