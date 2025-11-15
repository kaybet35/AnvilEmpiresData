#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "EmptyPayload.h"
#include "FrameRateChangedPayload.generated.h"

USTRUCT(BlueprintType)
struct FFrameRateChangedPayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate PreviousFrameRate;
    
    ENGINE_API FFrameRateChangedPayload();
};

