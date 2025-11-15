#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "AnimNode_AssetPlayerRelevancyBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_AssetPlayerRelevancyBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FAnimNode_AssetPlayerRelevancyBase();
};

