#pragma once
#include "CoreMinimal.h"
#include "RPCAnalyticsThreshold.generated.h"

USTRUCT(BlueprintType)
struct FRPCAnalyticsThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountPerSec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimePerSec;
    
    ENGINE_API FRPCAnalyticsThreshold();
};

