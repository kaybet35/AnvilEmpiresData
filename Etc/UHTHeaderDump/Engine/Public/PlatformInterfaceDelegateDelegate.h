#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceDelegateResult.h"
#include "PlatformInterfaceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlatformInterfaceDelegate, const FPlatformInterfaceDelegateResult&, Result);

