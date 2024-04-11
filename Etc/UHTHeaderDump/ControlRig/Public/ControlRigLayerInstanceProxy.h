#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ControlRigLayerInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigLayerInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FControlRigLayerInstanceProxy();
};

