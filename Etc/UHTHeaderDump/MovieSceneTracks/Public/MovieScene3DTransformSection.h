#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideProvider -FallbackName=MovieSceneChannelOverrideProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDoubleChannel -FallbackName=MovieSceneDoubleChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneConstrainedSection.h"
#include "MovieSceneTransformMask.h"
#include "MovieScene3DTransformSection.generated.h"

class UMovieScene3DTransformSectionConstraints;
class UMovieSceneSectionChannelOverrideRegistry;

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DTransformSection : public UMovieSceneSection, public IMovieSceneConstrainedSection, public IMovieSceneEntityProvider, public IMovieSceneChannelOverrideProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDoubleChannel Translation[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDoubleChannel Rotation[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDoubleChannel Scale[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieScene3DTransformSectionConstraints* Constraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseQuaternionInterpolation;
    
public:
    UMovieScene3DTransformSection();


    // Fix for true pure virtual functions not being implemented
};

