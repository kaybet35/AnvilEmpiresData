#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetObjectFilterConfig : public UObject {
    GENERATED_BODY()
public:
    UNetObjectFilterConfig();

};

