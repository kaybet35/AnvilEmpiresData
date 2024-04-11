#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SetAnimationChannelBase.h"
#include "RigUnit_SetTransformAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    FRigUnit_SetTransformAnimationChannel();
};

