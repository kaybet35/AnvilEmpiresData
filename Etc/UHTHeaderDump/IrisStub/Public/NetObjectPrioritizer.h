#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectPrioritizer.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetObjectPrioritizer : public UObject {
    GENERATED_BODY()
public:
    UNetObjectPrioritizer();

};

