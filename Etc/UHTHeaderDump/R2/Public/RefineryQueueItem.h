#pragma once
#include "CoreMinimal.h"
#include "GridItem.h"
#include "RefineryQueueItem.generated.h"

USTRUCT(BlueprintType)
struct R2_API FRefineryQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridItem Base;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OwnerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancel;
    
    FRefineryQueueItem();
};

