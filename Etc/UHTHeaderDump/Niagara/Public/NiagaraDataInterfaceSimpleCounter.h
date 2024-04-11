#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSimpleCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UNiagaraDataInterfaceSimpleCounter();

};

