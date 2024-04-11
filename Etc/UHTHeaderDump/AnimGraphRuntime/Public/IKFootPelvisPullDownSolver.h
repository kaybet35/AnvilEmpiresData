#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VectorRK4SpringInterpolator -FallbackName=VectorRK4SpringInterpolator
#include "IKFootPelvisPullDownSolver.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FIKFootPelvisPullDownSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator PelvisAdjustmentInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PelvisAdjustmentInterpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PelvisAdjustmentMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PelvisAdjustmentErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PelvisAdjustmentMaxIter;
    
    FIKFootPelvisPullDownSolver();
};

