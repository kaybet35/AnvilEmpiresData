#pragma once
#include "CoreMinimal.h"
#include "OnTimelineFloatDelegate.h"
#include "TimelineFloatTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTimelineFloatTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat InterpFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FloatPropertyName;
    
    ENGINE_API FTimelineFloatTrack();
};

