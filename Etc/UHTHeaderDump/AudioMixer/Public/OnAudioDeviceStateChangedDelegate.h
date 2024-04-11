#pragma once
#include "CoreMinimal.h"
#include "EAudioDeviceChangedState.h"
#include "OnAudioDeviceStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioDeviceStateChanged, const FString&, DeviceID, EAudioDeviceChangedState, NewState);

