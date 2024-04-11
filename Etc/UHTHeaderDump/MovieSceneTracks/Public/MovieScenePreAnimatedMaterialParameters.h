#pragma once
#include "CoreMinimal.h"
#include "MovieScenePreAnimatedMaterialParameters.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMovieScenePreAnimatedMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviousMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviousParameterContainer;
    
    MOVIESCENETRACKS_API FMovieScenePreAnimatedMaterialParameters();
};

