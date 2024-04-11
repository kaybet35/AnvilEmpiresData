#pragma once
#include "CoreMinimal.h"
#include "FieldNotificationId.h"
#include "FieldValueChangedDynamicDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFieldValueChangedDynamicDelegate, UObject*, Object, FFieldNotificationId, Field);

