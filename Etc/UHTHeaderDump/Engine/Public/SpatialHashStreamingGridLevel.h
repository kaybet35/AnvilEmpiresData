#pragma once
#include "CoreMinimal.h"
#include "SpatialHashStreamingGridLayerCell.h"
#include "SpatialHashStreamingGridLevel.generated.h"

USTRUCT(BlueprintType)
struct FSpatialHashStreamingGridLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGridLayerCell> LayerCells;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, int32> LayerCellsMapping;
    
    ENGINE_API FSpatialHashStreamingGridLevel();
};

