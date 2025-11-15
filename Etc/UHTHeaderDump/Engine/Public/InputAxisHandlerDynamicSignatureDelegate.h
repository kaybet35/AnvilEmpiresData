#pragma once
#include "CoreMinimal.h"
#include "InputAxisHandlerDynamicSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInputAxisHandlerDynamicSignature, float, AxisValue);

