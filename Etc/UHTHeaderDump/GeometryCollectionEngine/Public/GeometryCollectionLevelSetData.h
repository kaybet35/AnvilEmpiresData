#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionLevelSetData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionLevelSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinClusterLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxClusterLevelSetResolution;
    
    FGeometryCollectionLevelSetData();
};

