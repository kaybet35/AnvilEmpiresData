#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingObjectPathChannel.generated.h"

class UMovieSceneScriptingKey;
class UMovieSceneScriptingObjectPathKey;
class UObject;

UCLASS(Blueprintable)
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingObjectPathChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(UObject* InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingObjectPathKey* AddKey(const FFrameNumber InTime, UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

