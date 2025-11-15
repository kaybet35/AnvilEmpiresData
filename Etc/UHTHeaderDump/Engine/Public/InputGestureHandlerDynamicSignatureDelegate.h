#pragma once
#include "CoreMinimal.h"
#include "InputGestureHandlerDynamicSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInputGestureHandlerDynamicSignature, float, Value);

