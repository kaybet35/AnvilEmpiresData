#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByEnum.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    FAnimNode_BlendListByEnum();
};

