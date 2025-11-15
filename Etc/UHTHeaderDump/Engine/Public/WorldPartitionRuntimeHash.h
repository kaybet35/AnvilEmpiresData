#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionRuntimeCellOwner.h"
#include "WorldPartitionRuntimeHash.generated.h"

UCLASS(Abstract, Blueprintable, Within=WorldPartition)
class ENGINE_API UWorldPartitionRuntimeHash : public UObject, public IWorldPartitionRuntimeCellOwner {
    GENERATED_BODY()
public:
    UWorldPartitionRuntimeHash();


    // Fix for true pure virtual functions not being implemented
};

