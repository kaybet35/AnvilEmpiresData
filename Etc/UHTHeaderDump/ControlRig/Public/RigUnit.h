#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMStruct -FallbackName=RigVMStruct
#include "RigUnit.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigUnit();
};

