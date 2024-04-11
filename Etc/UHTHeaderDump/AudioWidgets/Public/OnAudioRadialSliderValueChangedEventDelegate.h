#pragma once
#include "CoreMinimal.h"
#include "OnAudioRadialSliderValueChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioRadialSliderValueChangedEvent, float, Value);

