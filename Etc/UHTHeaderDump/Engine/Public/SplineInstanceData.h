#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
#include "SplineCurves.h"
#include "SplineInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FSplineInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineHasBeenEdited;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurvesPreUCS;
    
    ENGINE_API FSplineInstanceData();
};

