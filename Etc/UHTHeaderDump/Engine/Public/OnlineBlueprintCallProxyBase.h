#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.h"
#include "OnlineBlueprintCallProxyBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBlueprintCallProxyBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UOnlineBlueprintCallProxyBase();

};

