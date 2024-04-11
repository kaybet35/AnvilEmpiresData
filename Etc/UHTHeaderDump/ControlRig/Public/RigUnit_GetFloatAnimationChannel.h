#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_GetFloatAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FRigUnit_GetFloatAnimationChannel();
};

