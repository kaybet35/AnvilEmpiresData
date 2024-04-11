#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "AnimationStateResultReference.generated.h"

USTRUCT(BlueprintType)
struct FAnimationStateResultReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FAnimationStateResultReference();
};

