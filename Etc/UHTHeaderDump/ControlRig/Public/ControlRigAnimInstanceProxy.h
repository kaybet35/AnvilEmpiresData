#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ControlRigAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FControlRigAnimInstanceProxy();
};

