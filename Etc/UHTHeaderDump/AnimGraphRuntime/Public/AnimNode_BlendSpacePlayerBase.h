#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
#include "AnimNode_BlendSpacePlayerBase.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendSpace* PreviousBlendSpace;
    
public:
    FAnimNode_BlendSpacePlayerBase();
};

