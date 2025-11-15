#pragma once
#include "CoreMinimal.h"
#include "ComponentEndCursorOverSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentEndCursorOverSignatureUObject*, EnterPropertyName, UPrimitiveComponent*, TouchedComponent);

