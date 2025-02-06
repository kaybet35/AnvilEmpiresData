#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.h"
#include "ReplyToMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FReplyToMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonSafeUint64 OriginalPosterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RequesterFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplyText;
    
    ANVIL_API FReplyToMapPostRequest();
};

