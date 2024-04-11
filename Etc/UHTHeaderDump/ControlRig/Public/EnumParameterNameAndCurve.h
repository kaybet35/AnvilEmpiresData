#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "EnumParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FEnumParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel ParameterCurve;
    
    FEnumParameterNameAndCurve();
};

