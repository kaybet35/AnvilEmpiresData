#pragma once
#include "CoreMinimal.h"
#include "R2ConfigSignPost.generated.h"

USTRUCT(BlueprintType)
struct FR2ConfigSignPost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMessageLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeChangeByUpvote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeChangeByDownvote;
    
    R2_API FR2ConfigSignPost();
};

