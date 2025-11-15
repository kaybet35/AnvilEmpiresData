#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "PredictProjectilePathPointData.h"
#include "PredictProjectilePathResult.generated.h"

USTRUCT(BlueprintType)
struct FPredictProjectilePathResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPredictProjectilePathPointData> PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictProjectilePathPointData LastTraceDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    ENGINE_API FPredictProjectilePathResult();
};

