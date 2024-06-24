#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "CentralMarketplaceListing.generated.h"

USTRUCT(BlueprintType)
struct FCentralMarketplaceListing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCount Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PricePerItem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ListingOwnerOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumItemsFulfilled;
    
    R2_API FCentralMarketplaceListing();
};

