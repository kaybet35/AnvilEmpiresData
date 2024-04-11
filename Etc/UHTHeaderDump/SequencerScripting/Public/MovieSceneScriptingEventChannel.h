#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneEvent -FallbackName=MovieSceneEvent
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingEventChannel.generated.h"

class UMovieSceneScriptingEventKey;
class UMovieSceneScriptingKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingEventChannel();

    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingEventKey* AddKey(const FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

