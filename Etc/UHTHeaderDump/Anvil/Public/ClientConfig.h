#pragma once
#include "CoreMinimal.h"
#include "ClientConfig.generated.h"

USTRUCT(BlueprintType)
struct FClientConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnvilServiceHttpUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Announcement;
    
    ANVIL_API FClientConfig();
};

