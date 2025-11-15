#pragma once
#include "CoreMinimal.h"
#include "KBoxElem.h"
#include "KConvexElem.h"
#include "KLevelSetElem.h"
#include "KSphereElem.h"
#include "KSphylElem.h"
#include "KTaperedCapsuleElem.h"
#include "KAggregateGeom.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FKAggregateGeom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKSphereElem> SphereElems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKBoxElem> BoxElems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKSphylElem> SphylElems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKConvexElem> ConvexElems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKTaperedCapsuleElem> TaperedCapsuleElems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKLevelSetElem> LevelSetElems;
    
    FKAggregateGeom();
};

