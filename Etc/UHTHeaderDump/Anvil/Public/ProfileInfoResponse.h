#pragma once
#include "CoreMinimal.h"
#include "ProfileInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FProfileInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 OnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AgeDeployData;
    
    ANVIL_API FProfileInfoResponse();
};

