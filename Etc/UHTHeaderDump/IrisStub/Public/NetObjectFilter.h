#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectFilter.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetObjectFilter : public UObject {
    GENERATED_BODY()
public:
    UNetObjectFilter();

};

