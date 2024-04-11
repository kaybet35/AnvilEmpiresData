#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneSectionParameters.h"
#include "MovieSceneSubSection.generated.h"

class UMovieSceneSequence;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MOVIESCENE_API UMovieSceneSubSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSectionParameters Parameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrerollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NetworkMask;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* SubSequence;
    
public:
    UMovieSceneSubSection();

    UFUNCTION(BlueprintCallable)
    void SetSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
};

