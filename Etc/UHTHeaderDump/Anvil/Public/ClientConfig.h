#pragma once
#include "CoreMinimal.h"
#include "GlobalShardConfig.h"
#include "ShardConfig.h"
#include "ClientConfig.generated.h"

USTRUCT(BlueprintType)
struct FClientConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalShardConfig GlobalShardConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShardConfig> AvailableShardList;
    
    ANVIL_API FClientConfig();
};

