#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraSimCacheCreateParameters.h"
#include "NiagaraSimCacheFunctionLibrary.generated.h"

class UNiagaraComponent;
class UNiagaraSimCache;
class UObject;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraSimCacheFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraSimCache* CreateNiagaraSimCache(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CaptureNiagaraSimCacheImmediate(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
    
};

