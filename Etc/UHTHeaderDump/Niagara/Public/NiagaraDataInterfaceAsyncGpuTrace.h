#pragma once
#include "CoreMinimal.h"
#include "ENDICollisionQuery_AsyncGpuTraceProvider.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAsyncGpuTrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTracesPerParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRetraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type> TraceProvider;
    
    UNiagaraDataInterfaceAsyncGpuTrace();

};

