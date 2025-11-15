#pragma once
#include "CoreMinimal.h"
#include "EAdditiveAnimationType.h"
#include "SlotEvaluationPose.generated.h"

USTRUCT(BlueprintType)
struct FSlotEvaluationPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAdditiveAnimationType> AdditiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ENGINE_API FSlotEvaluationPose();
};

