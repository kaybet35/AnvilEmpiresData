#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceEmitterBinding.h"
#include "NiagaraDataInterfaceEmitterProperties.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;
    
    UNiagaraDataInterfaceEmitterProperties();

};

