#pragma once
#include "CoreMinimal.h"
#include "EAnimFunctionCallSite.generated.h"

UENUM()
enum class EAnimFunctionCallSite : int32 {
    OnInitialize,
    OnUpdate,
    OnBecomeRelevant,
    OnEvaluate,
    OnInitializePostRecursion,
    OnUpdatePostRecursion,
    OnBecomeRelevantPostRecursion,
    OnEvaluatePostRecursion,
    OnStartedBlendingOut,
    OnStartedBlendingIn,
    OnFinishedBlendingOut,
    OnFinishedBlendingIn,
};

