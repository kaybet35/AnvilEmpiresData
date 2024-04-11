#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCVarOverrides.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCVarOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ValuesByCVar;
    
    MOVIESCENETRACKS_API FMovieSceneCVarOverrides();
};

