#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCVarOverrides.h"
#include "MovieSceneCVarSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCVarSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneCVarOverrides ConsoleVariables;
    
    UMovieSceneCVarSection();

    UFUNCTION(BlueprintCallable)
    void SetFromString(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString() const;
    

    // Fix for true pure virtual functions not being implemented
};

