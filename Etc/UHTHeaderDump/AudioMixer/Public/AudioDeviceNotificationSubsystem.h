#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "OnAudioDefaultDeviceChangedDelegate.h"
#include "OnAudioDeviceChangeDelegate.h"
#include "OnAudioDeviceStateChangedDelegate.h"
#include "AudioDeviceNotificationSubsystem.generated.h"

UCLASS(Blueprintable)
class AUDIOMIXER_API UAudioDeviceNotificationSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDefaultDeviceChanged DefaultCaptureDeviceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDefaultDeviceChanged DefaultRenderDeviceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDeviceChange DeviceAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDeviceChange DeviceRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDeviceStateChanged DeviceStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioDeviceChange DeviceSwitched;
    
    UAudioDeviceNotificationSubsystem();

};

