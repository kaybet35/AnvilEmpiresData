#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Root -FallbackName=AnimNode_Root
#include "AnimNode_BlendSpaceSampleResult.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root {
    GENERATED_BODY()
public:
    FAnimNode_BlendSpaceSampleResult();
};

