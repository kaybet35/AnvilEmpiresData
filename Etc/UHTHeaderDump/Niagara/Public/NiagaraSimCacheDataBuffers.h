#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimCacheDataBuffers.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheDataBuffers {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> FloatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> HalfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Int32Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IDToIndexTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 IDAcquireTag;
    
    NIAGARA_API FNiagaraSimCacheDataBuffers();
};

