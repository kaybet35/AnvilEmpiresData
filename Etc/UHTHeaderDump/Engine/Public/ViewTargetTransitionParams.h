#pragma once
#include "CoreMinimal.h"
#include "EViewTargetBlendFunction.h"
#include "ViewTargetTransitionParams.generated.h"

USTRUCT(BlueprintType)
struct FViewTargetTransitionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockOutgoing: 1;
    
    ENGINE_API FViewTargetTransitionParams();
};

