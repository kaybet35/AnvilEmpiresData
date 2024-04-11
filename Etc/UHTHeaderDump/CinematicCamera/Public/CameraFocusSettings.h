#pragma once
#include "CoreMinimal.h"
#include "CameraTrackingFocusSettings.h"
#include "ECameraFocusMethod.h"
#include "CameraFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ManualFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTrackingFocusSettings TrackingFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSmoothFocusChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusSmoothingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FocusOffset;
    
    CINEMATICCAMERA_API FCameraFocusSettings();
};

