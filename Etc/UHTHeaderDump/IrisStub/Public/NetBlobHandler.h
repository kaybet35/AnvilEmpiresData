#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetBlobHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetBlobHandler : public UObject {
    GENERATED_BODY()
public:
    UNetBlobHandler();

};

