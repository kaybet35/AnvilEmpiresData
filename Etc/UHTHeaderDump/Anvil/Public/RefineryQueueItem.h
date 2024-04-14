#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=GridItem -FallbackName=GridItem
#include "RefineryQueueItem.generated.h"

USTRUCT(BlueprintType)
struct ANVIL_API FRefineryQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridItem Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancel;
    
    FRefineryQueueItem();
};

