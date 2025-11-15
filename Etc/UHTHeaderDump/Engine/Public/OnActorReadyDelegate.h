#pragma once
#include "CoreMinimal.h"
#include "ActorInstanceHandle.h"
#include "OnActorReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FActorInstanceHandle, FOnActorReady, FActorInstanceHandle, InHandle);

