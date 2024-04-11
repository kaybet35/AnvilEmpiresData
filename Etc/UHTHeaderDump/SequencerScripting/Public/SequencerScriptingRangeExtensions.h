#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SequencerScriptingRange.h"
#include "SequencerScriptingRangeExtensions.generated.h"

UCLASS(Blueprintable)
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequencerScriptingRangeExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetStartSeconds(UPARAM(Ref) FSequencerScriptingRange& Range, float Start);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartFrame(UPARAM(Ref) FSequencerScriptingRange& Range, int32 Start);
    
    UFUNCTION(BlueprintCallable)
    static void SetEndSeconds(UPARAM(Ref) FSequencerScriptingRange& Range, float End);
    
    UFUNCTION(BlueprintCallable)
    static void SetEndFrame(UPARAM(Ref) FSequencerScriptingRange& Range, int32 End);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveStart(UPARAM(Ref) FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveEnd(UPARAM(Ref) FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static bool HasStart(const FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static bool HasEnd(const FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static float GetStartSeconds(const FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStartFrame(const FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static float GetEndSeconds(const FSequencerScriptingRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEndFrame(const FSequencerScriptingRange& Range);
    
};

