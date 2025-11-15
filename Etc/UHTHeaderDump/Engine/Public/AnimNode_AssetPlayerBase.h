#pragma once
#include "CoreMinimal.h"
#include "AnimNode_AssetPlayerRelevancyBase.h"
#include "AnimNode_AssetPlayerBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_AssetPlayerBase : public FAnimNode_AssetPlayerRelevancyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InternalTimeAccumulator;
    
public:
    FAnimNode_AssetPlayerBase();
};

