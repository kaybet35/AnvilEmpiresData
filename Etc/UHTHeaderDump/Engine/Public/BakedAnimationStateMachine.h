#pragma once
#include "CoreMinimal.h"
#include "AnimationTransitionBetweenStates.h"
#include "BakedAnimationState.h"
#include "BakedAnimationStateMachine.generated.h"

USTRUCT(BlueprintType)
struct FBakedAnimationStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakedAnimationState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationTransitionBetweenStates> Transitions;
    
    ENGINE_API FBakedAnimationStateMachine();
};

