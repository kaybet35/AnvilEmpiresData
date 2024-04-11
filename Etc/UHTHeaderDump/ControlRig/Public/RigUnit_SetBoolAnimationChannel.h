#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBase.h"
#include "RigUnit_SetBoolAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRigUnit_SetBoolAnimationChannel();
};

