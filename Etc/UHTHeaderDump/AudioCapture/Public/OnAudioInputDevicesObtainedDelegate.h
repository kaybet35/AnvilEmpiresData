#pragma once
#include "CoreMinimal.h"
#include "AudioInputDeviceInfo.h"
#include "OnAudioInputDevicesObtainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAudioInputDevicesObtained, const TArray<FAudioInputDeviceInfo>&, AvailableDevices);

