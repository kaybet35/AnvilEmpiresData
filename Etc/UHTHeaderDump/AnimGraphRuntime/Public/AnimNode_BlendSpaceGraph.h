#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendSpaceGraphBase.h"
#include "AnimNode_BlendSpaceGraph.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase {
    GENERATED_BODY()
public:
    FAnimNode_BlendSpaceGraph();
};

