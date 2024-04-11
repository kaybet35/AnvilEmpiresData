#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AudioParameter.h"
#include "AudioParameterControllerInterface.generated.h"

class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class AUDIOEXTENSIONS_API UAudioParameterControllerInterface : public UInterface {
    GENERATED_BODY()
};

class AUDIOEXTENSIONS_API IAudioParameterControllerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetTriggerParameter(FName InName) PURE_VIRTUAL(SetTriggerParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetStringParameter(FName InName, const FString& InValue) PURE_VIRTUAL(SetStringParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetStringArrayParameter(FName InName, const TArray<FString>& InValue) PURE_VIRTUAL(SetStringArrayParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetParameters_Blueprint(const TArray<FAudioParameter>& InParameters) PURE_VIRTUAL(SetParameters_Blueprint,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetObjectParameter(FName InName, UObject* InValue) PURE_VIRTUAL(SetObjectParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetObjectArrayParameter(FName InName, const TArray<UObject*>& InValue) PURE_VIRTUAL(SetObjectArrayParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIntParameter(FName InName, int32 inInt) PURE_VIRTUAL(SetIntParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIntArrayParameter(FName InName, const TArray<int32>& InValue) PURE_VIRTUAL(SetIntArrayParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetFloatParameter(FName InName, float InFloat) PURE_VIRTUAL(SetFloatParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetFloatArrayParameter(FName InName, const TArray<float>& InValue) PURE_VIRTUAL(SetFloatArrayParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetBoolParameter(FName InName, bool InBool) PURE_VIRTUAL(SetBoolParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetBoolArrayParameter(FName InName, const TArray<bool>& InValue) PURE_VIRTUAL(SetBoolArrayParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ResetParameters() PURE_VIRTUAL(ResetParameters,);
    
};

