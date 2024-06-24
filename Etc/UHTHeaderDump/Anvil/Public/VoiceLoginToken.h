#pragma once
#include "CoreMinimal.h"
#include "VoiceLoginToken.generated.h"

USTRUCT(BlueprintType)
struct FVoiceLoginToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalChanToken;
    
    ANVIL_API FVoiceLoginToken();
};

