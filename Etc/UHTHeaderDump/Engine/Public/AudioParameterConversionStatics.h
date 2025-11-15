#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameter -FallbackName=AudioParameter
#include "BlueprintFunctionLibrary.h"
#include "AudioParameterConversionStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UAudioParameterConversionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioParameterConversionStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter StringToAudioParameter(FName Name, const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter StringArrayToAudioParameter(FName Name, TArray<FString> Strings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter ObjectToAudioParameter(FName Name, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter ObjectArrayToAudioParameter(FName Name, TArray<UObject*> Objects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter IntegerToAudioParameter(FName Name, int32 Integer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter IntegerArrayToAudioParameter(FName Name, TArray<int32> Integers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter FloatToAudioParameter(FName Name, float float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter FloatArrayToAudioParameter(FName Name, TArray<float> Floats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter BooleanToAudioParameter(FName Name, bool bool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioParameter BooleanArrayToAudioParameter(FName Name, TArray<bool> Bools);
    
};

