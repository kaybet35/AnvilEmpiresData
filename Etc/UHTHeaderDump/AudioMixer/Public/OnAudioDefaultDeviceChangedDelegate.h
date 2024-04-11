#pragma once
#include "CoreMinimal.h"
#include "EAudioDeviceChangedRole.h"
#include "OnAudioDefaultDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioDefaultDeviceChanged, EAudioDeviceChangedRole, AudioDeviceRole, const FString&, DeviceID);

