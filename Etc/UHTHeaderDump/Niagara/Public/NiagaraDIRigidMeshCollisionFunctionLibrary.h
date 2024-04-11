#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraDIRigidMeshCollisionFunctionLibrary.generated.h"

class AActor;
class UNiagaraComponent;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraDIRigidMeshCollisionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetSourceActors(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<AActor*>& SourceActors);
    
};

