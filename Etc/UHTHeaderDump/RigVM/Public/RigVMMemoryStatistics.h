#pragma once
#include "CoreMinimal.h"
#include "RigVMMemoryStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMMemoryStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBytes;
    
    RIGVM_API FRigVMMemoryStatistics();
};

