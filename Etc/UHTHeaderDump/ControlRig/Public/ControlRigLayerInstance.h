#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=SequencerAnimationSupport -FallbackName=SequencerAnimationSupport
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ControlRigLayerInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class CONTROLRIG_API UControlRigLayerInstance : public UAnimInstance, public ISequencerAnimationSupport {
    GENERATED_BODY()
public:
    UControlRigLayerInstance();


    // Fix for true pure virtual functions not being implemented
};

