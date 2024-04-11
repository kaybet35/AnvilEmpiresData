#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionCollisionTypeData.h"
#include "GeometryCollectionSizeSpecificData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionSizeSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryCollectionCollisionTypeData> CollisionShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageThreshold;
    
    FGeometryCollectionSizeSpecificData();
};

