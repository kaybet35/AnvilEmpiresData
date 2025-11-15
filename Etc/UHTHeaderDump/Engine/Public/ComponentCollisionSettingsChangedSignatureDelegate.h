#pragma once
#include "CoreMinimal.h"
#include "ComponentCollisionSettingsChangedSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentCollisionSettingsChangedSignatureUObject*, EnterPropertyName, UPrimitiveComponent*, ChangedComponent);

