#pragma once
#include "CoreMinimal.h"
#include "CentralMarketplaceUserDataKey.generated.h"

USTRUCT(BlueprintType)
struct FCentralMarketplaceUserDataKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataForMarketEntityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataForMarketMapHash;
    
    ANVIL_API FCentralMarketplaceUserDataKey();
};

