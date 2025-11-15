#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionStreamingPolicy.h"
#include "WorldPartitionLevelStreamingPolicy.generated.h"

UCLASS(Blueprintable)
class UWorldPartitionLevelStreamingPolicy : public UWorldPartitionStreamingPolicy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SubObjectsToCellRemapping;
    
public:
    UWorldPartitionLevelStreamingPolicy();

};

