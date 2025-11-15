#pragma once
#include "CoreMinimal.h"
#include "OnPrimaryAssetClassListLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryAssetClassListLoaded, const TArray<UClass*>&, Loaded);

