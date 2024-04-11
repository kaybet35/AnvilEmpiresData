#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByInt.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendListByInt : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    FAnimNode_BlendListByInt();
};

