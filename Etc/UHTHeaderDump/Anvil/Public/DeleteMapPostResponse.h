#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.h"
#include "DeleteMapPostResponse.generated.h"

USTRUCT(BlueprintType)
struct FDeleteMapPostResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonSafeUint64 DeletedPostOwnerOnlineId;
    
    ANVIL_API FDeleteMapPostResponse();
};

