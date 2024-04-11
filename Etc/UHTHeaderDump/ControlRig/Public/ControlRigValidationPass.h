#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigValidationPass.generated.h"

UCLASS(Abstract, Blueprintable)
class CONTROLRIG_API UControlRigValidationPass : public UObject {
    GENERATED_BODY()
public:
    UControlRigValidationPass();

};

