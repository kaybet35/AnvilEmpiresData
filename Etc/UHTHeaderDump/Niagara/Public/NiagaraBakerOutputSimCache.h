#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraSimCacheCreateParameters.h"
#include "NiagaraBakerOutputSimCache.generated.h"

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SimCacheAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheCreateParameters CreateParameters;
    
    UNiagaraBakerOutputSimCache();

};

