#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=ObjectReplicationBridge -FallbackName=ObjectReplicationBridge
#include "ActorReplicationBridge.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UActorReplicationBridge : public UObjectReplicationBridge {
    GENERATED_BODY()
public:
    UActorReplicationBridge();

};

