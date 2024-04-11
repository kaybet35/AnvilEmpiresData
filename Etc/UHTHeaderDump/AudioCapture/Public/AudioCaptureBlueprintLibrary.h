#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioInputDeviceInfo.h"
#include "OnAudioInputDevicesObtainedDelegate.h"
#include "AudioCaptureBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class AUDIOCAPTURE_API UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioCaptureBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAvailableAudioInputDevices(const UObject* WorldContextObject, const FOnAudioInputDevicesObtained& OnObtainDevicesEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_AudioInputDeviceInfoToString(const FAudioInputDeviceInfo& Info);
    
};

