#pragma once
#include "CoreMinimal.h"
#include "ActiveForceFeedbackEffect.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct ENGINE_API FActiveForceFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    FActiveForceFeedbackEffect();
};

