#pragma once
#include "CoreMinimal.h"
#include "ChaosRemovalEventData.h"
#include "OnChaosRemovalEventsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosRemovalEvents, const TArray<FChaosRemovalEventData>&, RemovalEvents);

