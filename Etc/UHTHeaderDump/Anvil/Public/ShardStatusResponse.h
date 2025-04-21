#pragma once
#include "CoreMinimal.h"
#include "ShardStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct FShardStatusResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AtCapacityFactionBits;
    
    ANVIL_API FShardStatusResponse();
};

