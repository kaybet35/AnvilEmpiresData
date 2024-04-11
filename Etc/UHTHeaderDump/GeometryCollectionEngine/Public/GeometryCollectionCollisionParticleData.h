#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionCollisionParticleData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionCollisionParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionParticlesFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumCollisionParticles;
    
    FGeometryCollectionCollisionParticleData();
};

