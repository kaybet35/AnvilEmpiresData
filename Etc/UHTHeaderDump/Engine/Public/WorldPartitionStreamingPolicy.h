#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionStreamingPolicy.generated.h"

UCLASS(Abstract, Blueprintable, Within=WorldPartition)
class UWorldPartitionStreamingPolicy : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionStreamingPolicy();

};

