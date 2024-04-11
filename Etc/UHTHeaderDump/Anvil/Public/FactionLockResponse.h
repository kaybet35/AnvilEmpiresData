#pragma once
#include "CoreMinimal.h"
#include "FactionLockResponse.generated.h"

USTRUCT(BlueprintType)
struct FFactionLockResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LockedFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeleteProfile;
    
    ANVIL_API FFactionLockResponse();
};

