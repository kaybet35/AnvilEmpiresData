#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceArray.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElements;
    
    UNiagaraDataInterfaceArray();

};

