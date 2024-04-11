#pragma once
#include "CoreMinimal.h"
#include "CameraAnimationHandle.h"
#include "CameraAnimationParams.h"
#include "ActiveCameraAnimationInfo.generated.h"

class UCameraAnimationSequence;
class UCameraAnimationSequenceCameraStandIn;
class UCameraAnimationSequencePlayer;

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FActiveCameraAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraAnimationParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraAnimationHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequencePlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequenceCameraStandIn* CameraStandIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseInCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOutCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEasingIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEasingOut;
    
    FActiveCameraAnimationInfo();
};

