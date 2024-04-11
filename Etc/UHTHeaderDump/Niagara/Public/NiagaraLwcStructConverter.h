#pragma once
#include "CoreMinimal.h"
#include "NiagaraStructConversionStep.h"
#include "NiagaraLwcStructConverter.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraLwcStructConverter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraStructConversionStep> ConversionSteps;
    
public:
    FNiagaraLwcStructConverter();
};

