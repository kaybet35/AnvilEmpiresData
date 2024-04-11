#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimCacheDataBuffersLayout.h"
#include "NiagaraSimCacheLayout.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheDataBuffersLayout SystemLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;
    
    NIAGARA_API FNiagaraSimCacheLayout();
};

