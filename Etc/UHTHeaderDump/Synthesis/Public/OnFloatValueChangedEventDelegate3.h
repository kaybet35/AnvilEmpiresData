#pragma once
#include "CoreMinimal.h"
#include "OnFloatValueChangedEventDelegate3.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatValueChangedEvent, float, Value);

