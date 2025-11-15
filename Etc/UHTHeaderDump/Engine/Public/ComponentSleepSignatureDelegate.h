#pragma once
#include "CoreMinimal.h"
#include "ComponentSleepSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentSleepSignatureUObject*, EnterPropertyName, UPrimitiveComponent*, SleepingComponent, FName, BoneName);

