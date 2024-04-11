#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneRootEvaluationTemplateInstance -FallbackName=MovieSceneRootEvaluationTemplateInstance
#include "CameraAnimationSequencePlayer.generated.h"

class UMovieSceneSequence;

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API UCameraAnimationSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* BoundObjectOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
public:
    UCameraAnimationSequencePlayer();

};

