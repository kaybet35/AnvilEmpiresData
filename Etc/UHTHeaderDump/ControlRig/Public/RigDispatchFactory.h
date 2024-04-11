#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMDispatchFactory -FallbackName=RigVMDispatchFactory
#include "RigDispatchFactory.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigDispatchFactory : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    FRigDispatchFactory();
};

