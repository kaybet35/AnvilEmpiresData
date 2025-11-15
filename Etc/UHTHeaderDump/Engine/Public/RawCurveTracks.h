#pragma once
#include "CoreMinimal.h"
#include "FloatCurve.h"
#include "RawCurveTracks.generated.h"

USTRUCT(BlueprintType)
struct FRawCurveTracks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatCurve> FloatCurves;
    
    ENGINE_API FRawCurveTracks();
};

