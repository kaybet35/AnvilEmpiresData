#pragma once
#include "CoreMinimal.h"
#include "GridItem.h"
#include "CentralMarketplaceOrderItem.generated.h"

USTRUCT(BlueprintType)
struct FCentralMarketplaceOrderItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridItem Base;
    
    R2_API FCentralMarketplaceOrderItem();
};

