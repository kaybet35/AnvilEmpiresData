#pragma once
#include "CoreMinimal.h"
#include "OnVisSplineShapeUpdatedDelegate.generated.h"

class USplineDataComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVisSplineShapeUpdated, const USplineDataComponent*, SplineDataComponent);

