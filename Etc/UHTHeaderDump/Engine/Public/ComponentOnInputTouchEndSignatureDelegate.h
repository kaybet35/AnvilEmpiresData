#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
#include "ComponentOnInputTouchEndSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentOnInputTouchEndSignatureUObject*, EnterPropertyName, TEnumAsByte<ETouchIndex::Type>, FingerIndex, UPrimitiveComponent*, TouchedComponent);

