#pragma once
#include "CoreMinimal.h"
#include "WorldEntityCentralMarketplaceData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityCentralMarketplaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    R2_API FWorldEntityCentralMarketplaceData();
};

