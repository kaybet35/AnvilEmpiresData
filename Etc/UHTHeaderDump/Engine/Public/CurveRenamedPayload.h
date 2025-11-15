#pragma once
#include "CoreMinimal.h"
#include "AnimationCurveIdentifier.h"
#include "CurvePayload.h"
#include "CurveRenamedPayload.generated.h"

USTRUCT(BlueprintType)
struct FCurveRenamedPayload : public FCurvePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationCurveIdentifier NewIdentifier;
    
    ENGINE_API FCurveRenamedPayload();
};

