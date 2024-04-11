#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraCulledComponentInfo.h"
#include "NiagaraCullProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNiagaraCullProxyComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraCulledComponentInfo> Instances;
    
    UNiagaraCullProxyComponent(const FObjectInitializer& ObjectInitializer);

};

