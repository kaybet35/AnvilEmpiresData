#pragma once
#include "CoreMinimal.h"
#include "ComponentWakeSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentWakeSignatureUObject*, EnterPropertyName, UPrimitiveComponent*, WakingComponent, FName, BoneName);

