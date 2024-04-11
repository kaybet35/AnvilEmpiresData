#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceRWBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceRWBase();

};

