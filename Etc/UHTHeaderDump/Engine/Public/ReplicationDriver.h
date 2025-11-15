#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationDriver.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class ENGINE_API UReplicationDriver : public UObject {
    GENERATED_BODY()
public:
    UReplicationDriver();

};

