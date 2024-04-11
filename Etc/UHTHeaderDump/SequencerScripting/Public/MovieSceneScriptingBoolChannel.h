#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "SequencerScriptingRange.h"
#include "MovieSceneScriptingBoolChannel.generated.h"

class UMovieSceneScriptingBoolKey;
class UMovieSceneScriptingKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingBoolChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(bool InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSequencerScriptingRange ComputeEffectiveRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingBoolKey* AddKey(const FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

