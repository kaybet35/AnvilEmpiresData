#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputActionValue.h"
#include "InputDebugKeyHandlerDynamicSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FInputDebugKeyHandlerDynamicSignature, FKey, Key, FInputActionValue, ActionValue);

