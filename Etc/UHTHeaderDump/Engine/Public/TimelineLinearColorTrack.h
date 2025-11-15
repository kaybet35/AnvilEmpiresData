#pragma once
#include "CoreMinimal.h"
#include "OnTimelineLinearColorDelegate.h"
#include "TimelineLinearColorTrack.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FTimelineLinearColorTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* LinearColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineLinearColor InterpFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinearColorPropertyName;
    
    ENGINE_API FTimelineLinearColorTrack();
};

