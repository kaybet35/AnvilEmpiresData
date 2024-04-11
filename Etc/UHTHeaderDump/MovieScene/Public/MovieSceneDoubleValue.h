#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
#include "MovieSceneTangentData.h"
#include "MovieSceneDoubleValue.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDoubleValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneDoubleValue();
};

