#pragma once
#include "CoreMinimal.h"
#include "OnAudioPlaybackPercentDelegate.generated.h"

class USoundWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioPlaybackPercent, const USoundWave*, PlayingSoundWave, const float, PlaybackPercent);

