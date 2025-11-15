#pragma once
#include "CoreMinimal.h"
#include "SpatialHashStreamingGridLayerCell.generated.h"

class UWorldPartitionRuntimeSpatialHashCell;

USTRUCT(BlueprintType)
struct FSpatialHashStreamingGridLayerCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeSpatialHashCell*> GridCells;
    
    ENGINE_API FSpatialHashStreamingGridLayerCell();
};

