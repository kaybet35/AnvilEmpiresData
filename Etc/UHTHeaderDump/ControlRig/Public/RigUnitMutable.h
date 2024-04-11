#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnitMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnitMutable : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnitMutable();
};

