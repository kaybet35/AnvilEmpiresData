#pragma once
#include "CoreMinimal.h"
#include "BoolResponse.generated.h"

USTRUCT(BlueprintType)
struct FBoolResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    ANVIL_API FBoolResponse();
};

