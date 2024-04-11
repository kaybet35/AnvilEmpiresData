#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneKeyInterpolation -FallbackName=EMovieSceneKeyInterpolation
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "SequencerScriptingRange.h"
#include "MovieSceneScriptingFloatChannel.generated.h"

class UMovieSceneScriptingFloatKey;
class UMovieSceneScriptingKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingFloatChannel();

    UFUNCTION(BlueprintCallable)
    void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    
    UFUNCTION(BlueprintCallable)
    void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    
    UFUNCTION(BlueprintCallable)
    void SetDefault(float InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSequencerScriptingRange ComputeEffectiveRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingFloatKey* AddKey(const FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
    
};

