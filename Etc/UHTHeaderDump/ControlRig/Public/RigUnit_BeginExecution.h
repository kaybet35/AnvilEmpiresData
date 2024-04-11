#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_BeginExecution.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BeginExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_BeginExecution();
};

