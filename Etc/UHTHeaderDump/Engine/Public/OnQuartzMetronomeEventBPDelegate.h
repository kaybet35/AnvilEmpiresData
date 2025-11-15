#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.h"
#include "OnQuartzMetronomeEventBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FOnQuartzMetronomeEventBP, FName, ClockName, EQuartzCommandQuantization, QuantizationType, int32, NumBars, int32, Beat, float, BeatFraction);

