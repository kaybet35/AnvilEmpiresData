#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
#include "GeometryCollectionCollisionParticleData.h"
#include "GeometryCollectionLevelSetData.h"
#include "GeometryCollectionCollisionTypeData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionCollisionTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryCollectionLevelSetData LevelSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryCollectionCollisionParticleData CollisionParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionObjectReductionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionMarginFraction;
    
    FGeometryCollectionCollisionTypeData();
};

