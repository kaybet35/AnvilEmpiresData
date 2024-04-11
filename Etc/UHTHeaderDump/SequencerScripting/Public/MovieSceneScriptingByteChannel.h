#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneKeyInterpolation -FallbackName=EMovieSceneKeyInterpolation
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingByteChannel.generated.h"

class UMovieSceneScriptingByteKey;
class UMovieSceneScriptingKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingByteChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(uint8 InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingByteKey* AddKey(const FFrameNumber& InTime, uint8 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
    
};

