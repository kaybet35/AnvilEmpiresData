#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_GetBoolAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRigUnit_GetBoolAnimationChannel();
};

