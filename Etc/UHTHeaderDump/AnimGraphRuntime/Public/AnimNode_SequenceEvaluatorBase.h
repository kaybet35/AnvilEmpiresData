#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
#include "AnimNode_SequenceEvaluatorBase.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    FAnimNode_SequenceEvaluatorBase();
};

