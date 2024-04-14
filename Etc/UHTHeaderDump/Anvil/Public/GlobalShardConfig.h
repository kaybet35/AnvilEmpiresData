#pragma once
#include "CoreMinimal.h"
#include "GlobalShardConfig.generated.h"

USTRUCT(BlueprintType)
struct FGlobalShardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordRoleServerUrl;
    
    ANVIL_API FGlobalShardConfig();
};

