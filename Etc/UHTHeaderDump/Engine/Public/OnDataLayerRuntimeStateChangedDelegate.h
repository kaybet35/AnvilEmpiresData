#pragma once
#include "CoreMinimal.h"
#include "EDataLayerRuntimeState.h"
#include "OnDataLayerRuntimeStateChangedDelegate.generated.h"

class UDataLayerInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDataLayerRuntimeStateChanged, const UDataLayerInstance*, DataLayer, EDataLayerRuntimeState, State);

