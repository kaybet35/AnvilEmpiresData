#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraWaterFunctionLibrary.generated.h"

class AWaterBody;
class UNiagaraComponent;
class UWaterBodyComponent;

UCLASS(Blueprintable)
class WATER_API UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraWaterFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetWaterBodyComponent(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UWaterBodyComponent* WaterBodyComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetWaterBody(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, AWaterBody* WaterBody);
    
};

