#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationBridge.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UReplicationBridge : public UObject {
    GENERATED_BODY()
public:
    UReplicationBridge();

};

