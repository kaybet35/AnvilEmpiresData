#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.h"
#include "AsyncActionLoadPrimaryAssetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UAsyncActionLoadPrimaryAssetBase();

};

