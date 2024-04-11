#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBase.h"
#include "RigUnit_SetIntAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FRigUnit_SetIntAnimationChannel();
};

