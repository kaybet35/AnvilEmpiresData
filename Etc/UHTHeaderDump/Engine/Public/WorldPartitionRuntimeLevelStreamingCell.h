#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeSpatialHashCell.h"
#include "WorldPartitionRuntimeLevelStreamingCell.generated.h"

class UWorldPartitionLevelStreamingDynamic;

UCLASS(Blueprintable)
class UWorldPartitionRuntimeLevelStreamingCell : public UWorldPartitionRuntimeSpatialHashCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldPartitionLevelStreamingDynamic* LevelStreaming;
    
public:
    UWorldPartitionRuntimeLevelStreamingCell();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
};

