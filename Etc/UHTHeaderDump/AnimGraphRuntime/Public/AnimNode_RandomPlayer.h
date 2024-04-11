#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerRelevancyBase -FallbackName=AnimNode_AssetPlayerRelevancyBase
#include "RandomPlayerSequenceEntry.h"
#include "AnimNode_RandomPlayer.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntry> Entries;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffleMode;
    
    FAnimNode_RandomPlayer();
};

