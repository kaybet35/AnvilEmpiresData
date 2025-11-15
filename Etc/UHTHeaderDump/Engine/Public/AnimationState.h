#pragma once
#include "CoreMinimal.h"
#include "AnimationStateBase.h"
#include "AnimationTransitionRule.h"
#include "AnimationState.generated.h"

USTRUCT(BlueprintType)
struct FAnimationState : public FAnimationStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationTransitionRule> Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateRootNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullyBlendedNotify;
    
    ENGINE_API FAnimationState();
};

