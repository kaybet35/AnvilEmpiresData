#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendSpacePlayerBase.h"
#include "AnimNode_BlendSpacePlayer.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace;
    
public:
    FAnimNode_BlendSpacePlayer();
};

