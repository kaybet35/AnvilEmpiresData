#pragma once
#include "CoreMinimal.h"
#include "DismantleVoteInfo.generated.h"

USTRUCT(BlueprintType)
struct FDismantleVoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 VoterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VoteCount;
    
    R2_API FDismantleVoteInfo();
};

