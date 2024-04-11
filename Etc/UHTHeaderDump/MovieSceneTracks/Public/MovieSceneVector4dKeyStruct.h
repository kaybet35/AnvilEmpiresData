#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4d -FallbackName=Vector4d
#include "MovieSceneDoubleVectorKeyStructBase.h"
#include "MovieSceneVector4dKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4d Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4dKeyStruct();
};

