#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "AnimNode_RefPose.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RefPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FAnimNode_RefPose();
};

