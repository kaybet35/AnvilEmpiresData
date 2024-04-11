#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraSimCacheVariable.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FloatOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FloatCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HalfOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HalfCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Int32Offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Int32Count;
    
    NIAGARA_API FNiagaraSimCacheVariable();
};

