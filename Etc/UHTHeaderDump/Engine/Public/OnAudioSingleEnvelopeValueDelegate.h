#pragma once
#include "CoreMinimal.h"
#include "OnAudioSingleEnvelopeValueDelegate.generated.h"

class USoundWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioSingleEnvelopeValue, const USoundWave*, PlayingSoundWave, const float, EnvelopeValue);

