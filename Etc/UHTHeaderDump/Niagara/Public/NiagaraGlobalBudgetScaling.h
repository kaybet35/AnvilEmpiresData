#pragma once
#include "CoreMinimal.h"
#include "NiagaraLinearRamp.h"
#include "NiagaraGlobalBudgetScaling.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraGlobalBudgetScaling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullByGlobalBudget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleMaxDistanceByGlobalBudgetUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleMaxInstanceCountByGlobalBudgetUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleSystemInstanceCountByGlobalBudgetUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGlobalBudgetUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse;
    
    NIAGARA_API FNiagaraGlobalBudgetScaling();
};

