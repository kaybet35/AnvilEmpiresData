#pragma once
#include "CoreMinimal.h"
#include "ProfileInfoResponse.h"
#include "DeleteProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FDeleteProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeletedProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileInfoResponse ProfileInfo;
    
    ANVIL_API FDeleteProfileResponse();
};

