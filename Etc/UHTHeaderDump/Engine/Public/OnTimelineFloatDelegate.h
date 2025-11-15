#pragma once
#include "CoreMinimal.h"
#include "OnTimelineFloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTimelineFloat, float, Output);

