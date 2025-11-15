#pragma once
#include "CoreMinimal.h"
#include "AnimGraphBlendOptions.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct FAnimGraphBlendOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendInProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendOutProfile;
    
    ENGINE_API FAnimGraphBlendOptions();
};

