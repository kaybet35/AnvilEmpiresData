#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.h"
#include "RigVMMemoryStatistics.h"
#include "RigVMStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BytesForCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BytesPerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMMemoryStatistics LiteralMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMMemoryStatistics WorkMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMMemoryStatistics DebugMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BytesForCaching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMByteCodeStatistics ByteCode;
    
    RIGVM_API FRigVMStatistics();
};

