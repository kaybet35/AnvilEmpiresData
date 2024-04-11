#pragma once
#include "CoreMinimal.h"
#include "QueueStatusType.h"
#include "QueueStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct FQueueStatusResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    QueueStatusType QueueStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueuedServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueuePosition;
    
    ANVIL_API FQueueStatusResponse();
};

