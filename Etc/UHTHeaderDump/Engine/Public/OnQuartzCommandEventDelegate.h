#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandDelegateSubType.h"
#include "OnQuartzCommandEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuartzCommandEvent, EQuartzCommandDelegateSubType, EventType, FName, Name);

