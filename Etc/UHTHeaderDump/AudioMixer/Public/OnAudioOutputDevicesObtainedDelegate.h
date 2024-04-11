#pragma once
#include "CoreMinimal.h"
#include "AudioOutputDeviceInfo.h"
#include "OnAudioOutputDevicesObtainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAudioOutputDevicesObtained, const TArray<FAudioOutputDeviceInfo>&, AvailableDevices);

