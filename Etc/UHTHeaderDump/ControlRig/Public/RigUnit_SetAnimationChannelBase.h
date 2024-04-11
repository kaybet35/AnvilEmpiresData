#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_SetAnimationChannelBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_SetAnimationChannelBase();
};

