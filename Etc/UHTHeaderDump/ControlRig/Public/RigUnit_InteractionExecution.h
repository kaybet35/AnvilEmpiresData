#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_InteractionExecution.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_InteractionExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_InteractionExecution();
};

