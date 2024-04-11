#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=TransformableHandle -FallbackName=TransformableHandle
#include "TransformableControlHandle.generated.h"

class UControlRig;

UCLASS(Blueprintable)
class CONTROLRIG_API UTransformableControlHandle : public UTransformableHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UControlRig> ControlRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlName;
    
    UTransformableControlHandle();

};

