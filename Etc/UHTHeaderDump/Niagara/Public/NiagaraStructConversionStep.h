#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStructConversionType.h"
#include "NiagaraStructConversionStep.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStructConversionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulationBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraStructConversionType ConversionType;
    
    NIAGARA_API FNiagaraStructConversionStep();
};

