#pragma once
#include "CoreMinimal.h"
#include "ProfileInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FProfileInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AgeDeployData;
    
    ANVIL_API FProfileInfoResponse();
};

