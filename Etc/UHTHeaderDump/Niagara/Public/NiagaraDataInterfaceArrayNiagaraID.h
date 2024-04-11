#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraID.h"
#include "NiagaraDataInterfaceArrayNiagaraID.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraID> IntData;
    
    UNiagaraDataInterfaceArrayNiagaraID();

};

