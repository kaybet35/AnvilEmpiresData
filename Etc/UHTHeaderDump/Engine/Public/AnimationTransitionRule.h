#pragma once
#include "CoreMinimal.h"
#include "AnimationTransitionRule.generated.h"

USTRUCT(BlueprintType)
struct FAnimationTransitionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RuleToExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TransitionReturnVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionIndex;
    
    ENGINE_API FAnimationTransitionRule();
};

