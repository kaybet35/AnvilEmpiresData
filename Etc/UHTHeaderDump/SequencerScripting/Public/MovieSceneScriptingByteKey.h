#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingByteKey.generated.h"

UCLASS(Blueprintable)
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingByteKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(uint8 InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit) const;
    
};

