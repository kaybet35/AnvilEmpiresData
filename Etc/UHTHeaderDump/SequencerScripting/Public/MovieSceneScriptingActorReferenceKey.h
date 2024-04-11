#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingActorReferenceKey.generated.h"

UCLASS(Blueprintable)
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingActorReferenceKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(const FMovieSceneObjectBindingID& InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit) const;
    
};

