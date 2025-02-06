#pragma once
#include "CoreMinimal.h"
#include "MapPost.h"
#include "GetMapPostsResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetMapPostsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapPost> MapPostList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOriginalOperationSuccess;
    
    ANVIL_API FGetMapPostsResponse();
};

