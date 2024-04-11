#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SequenceEvaluatorBase.h"
#include "AnimNode_SequenceEvaluator.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase {
    GENERATED_BODY()
public:
    FAnimNode_SequenceEvaluator();
};

