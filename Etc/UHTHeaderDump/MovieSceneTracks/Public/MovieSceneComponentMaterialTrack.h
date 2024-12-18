#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneParameterSectionExtender.h"
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneEntityProvider, public IMovieSceneParameterSectionExtender {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    UMovieSceneComponentMaterialTrack();


    // Fix for true pure virtual functions not being implemented
};

