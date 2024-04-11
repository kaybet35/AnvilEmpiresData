#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "AnimationStateMachineReference.generated.h"

USTRUCT(BlueprintType)
struct FAnimationStateMachineReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FAnimationStateMachineReference();
};

