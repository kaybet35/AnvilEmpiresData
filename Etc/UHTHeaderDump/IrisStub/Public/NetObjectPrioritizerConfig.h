#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectPrioritizerConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetObjectPrioritizerConfig : public UObject {
    GENERATED_BODY()
public:
    UNetObjectPrioritizerConfig();

};

