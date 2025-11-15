#pragma once
#include "CoreMinimal.h"
#include "RuntimeHashExternalStreamingObjectBase.h"
#include "SpatialHashStreamingGrid.h"
#include "RuntimeSpatialHashExternalStreamingObject.generated.h"

UCLASS(Blueprintable)
class URuntimeSpatialHashExternalStreamingObject : public URuntimeHashExternalStreamingObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGrid> StreamingGrids;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CellToLevelStreamingPackage;
    
public:
    URuntimeSpatialHashExternalStreamingObject();

};

