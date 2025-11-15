#pragma once
#include "CoreMinimal.h"
#include "InertializationRequest.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct FInertializationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfile;
    
    ENGINE_API FInertializationRequest();
};

