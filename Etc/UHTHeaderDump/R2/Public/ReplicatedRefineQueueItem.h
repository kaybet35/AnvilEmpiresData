#pragma once
#include "CoreMinimal.h"
#include "ReplicatedRefineQueueItem.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedRefineQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ItemQuality;
    
    R2_API FReplicatedRefineQueueItem();
};

