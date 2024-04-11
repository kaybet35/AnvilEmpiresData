#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "BlendSpacePlayerReference.generated.h"

USTRUCT(BlueprintType)
struct FBlendSpacePlayerReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FBlendSpacePlayerReference();
};

