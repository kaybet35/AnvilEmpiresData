#pragma once
#include "CoreMinimal.h"
#include "EComponentPhysicsStateChange.h"
#include "ComponentPhysicsStateChangedDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentPhysicsStateChangedUObject*, EnterPropertyName, UPrimitiveComponent*, ChangedComponent, EComponentPhysicsStateChange, StateChange);

