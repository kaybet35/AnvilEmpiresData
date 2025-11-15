#pragma once
#include "CoreMinimal.h"
#include "AnimationCurveIdentifier.h"
#include "EmptyPayload.h"
#include "CurvePayload.generated.h"

USTRUCT(BlueprintType)
struct FCurvePayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationCurveIdentifier Identifier;
    
    ENGINE_API FCurvePayload();
};

