#pragma once
#include "CoreMinimal.h"
#include "GetMapAvatarInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetMapAvatarInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionLists;
    
    ANVIL_API FGetMapAvatarInfoResponse();
};

