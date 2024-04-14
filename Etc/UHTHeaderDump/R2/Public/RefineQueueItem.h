#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "RefineQueueItem.generated.h"

USTRUCT(BlueprintType)
struct FRefineQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ItemQuality;
    
    R2_API FRefineQueueItem();
};

