#pragma once
#include "CoreMinimal.h"
#include "DeleteProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FDeleteProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 OnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeletedProfile;
    
    ANVIL_API FDeleteProfileResponse();
};

