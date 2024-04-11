#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingObjectPathKey.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingObjectPathKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(UObject* InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit) const;
    
};

