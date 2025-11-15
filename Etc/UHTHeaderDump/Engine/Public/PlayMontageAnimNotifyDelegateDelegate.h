#pragma once
#include "CoreMinimal.h"
#include "BranchingPointNotifyPayload.h"
#include "PlayMontageAnimNotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayMontageAnimNotifyDelegate, FName, NotifyName, const FBranchingPointNotifyPayload&, BranchingPointPayload);

