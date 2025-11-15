#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorDataLayer.h"
#include "EDataLayerRuntimeState.h"
#include "EDataLayerState.h"
#include "DataLayer.generated.h"

class UDEPRECATED_DataLayer;

UCLASS(Blueprintable, Deprecated, NotPlaceable, PerObjectConfig, Within=WorldDataLayers)
class ENGINE_API UDEPRECATED_DataLayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRuntime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerRuntimeState InitialRuntimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDEPRECATED_DataLayer* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDEPRECATED_DataLayer*> Children;
    
public:
    UDEPRECATED_DataLayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitiallyVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitiallyActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectiveVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicallyLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerState GetInitialState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetInitialRuntimeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetDebugColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDataLayerLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Equals(const FActorDataLayer& ActorDataLayer) const;
    
};

