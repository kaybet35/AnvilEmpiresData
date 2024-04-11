#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceSimCacheReader.generated.h"

class UNiagaraSimCache;

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding SimCacheBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSimCache* SimCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmitterBinding;
    
    UNiagaraDataInterfaceSimCacheReader();

};

