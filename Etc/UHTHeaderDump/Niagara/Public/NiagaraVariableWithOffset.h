#pragma once
#include "CoreMinimal.h"
#include "NiagaraLwcStructConverter.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariableWithOffset.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraLwcStructConverter StructConverter;
    
    NIAGARA_API FNiagaraVariableWithOffset();
};

