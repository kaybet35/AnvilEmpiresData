#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataInterfaceEmitterBindingMode.h"
#include "NiagaraDataInterfaceEmitterBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataInterfaceEmitterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDataInterfaceEmitterBindingMode BindingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmitterName;
    
    NIAGARA_API FNiagaraDataInterfaceEmitterBinding();
};

