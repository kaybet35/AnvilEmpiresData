#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDataLayerRuntimeState.h"
#include "EDataLayerType.h"
#include "DataLayerInstance.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable, PerObjectConfig, Within=WorldDataLayers)
class ENGINE_API UDataLayerInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerRuntimeState InitialRuntimeState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerInstance* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerInstance*> Children;
    
public:
    UDataLayerInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitiallyVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectiveVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetInitialRuntimeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetDebugColor() const;
    
};

