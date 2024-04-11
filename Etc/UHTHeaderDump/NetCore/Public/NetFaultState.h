#pragma once
#include "CoreMinimal.h"
#include "EscalationState.h"
#include "NetFaultState.generated.h"

USTRUCT(BlueprintType)
struct NETCORE_API FNetFaultState : public FEscalationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseConnection;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalateQuotaFaultsPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EscalateQuotaFaultPercentPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DescalateQuotaFaultsPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DescalateQuotaFaultPercentPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EscalateQuotaTimePeriod;
    
    FNetFaultState();
};

