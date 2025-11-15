#pragma once
#include "CoreMinimal.h"
#include "SpatialHashStreamingGrid.h"
#include "WorldPartitionRuntimeHash.h"
#include "WorldPartitionRuntimeSpatialHash.generated.h"

class URuntimeSpatialHashExternalStreamingObject;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API UWorldPartitionRuntimeSpatialHash : public UWorldPartitionRuntimeHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableZCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGrid> StreamingGrids;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<URuntimeSpatialHashExternalStreamingObject>> ExternalStreamingObjects;
    
public:
    UWorldPartitionRuntimeSpatialHash();

};

