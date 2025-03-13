#pragma once
#include "CoreMinimal.h"
#include "GetIsAdminResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetIsAdminResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdmin;
    
    ANVIL_API FGetIsAdminResponse();
};

