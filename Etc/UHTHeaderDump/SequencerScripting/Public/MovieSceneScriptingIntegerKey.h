#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingIntegerKey.generated.h"

UCLASS(Blueprintable)
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingIntegerKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit) const;
    
};

