#pragma once
#include "CoreMinimal.h"
#include "CentralMarketplaceListing.h"
#include "CentralMarketplaceUserData.generated.h"

USTRUCT(BlueprintType)
struct FCentralMarketplaceUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataForMarketEntityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataForMarketMapHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCentralMarketplaceListing> SaleListings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCentralMarketplaceListing> OrderListings;
    
    R2_API FCentralMarketplaceUserData();
};

