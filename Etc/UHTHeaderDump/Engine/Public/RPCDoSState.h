#pragma once
#include "CoreMinimal.h"
#include "RPCDoSState.generated.h"

USTRUCT(BlueprintType)
struct FRPCDoSState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogEscalate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendEscalateAnalytics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKickPlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackRecentRPCs;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalateQuotaRPCsPerFrame;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalateTimeQuotaMSPerFrame;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalateQuotaRPCsPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalateTimeQuotaMSPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EscalateQuotaTimePeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EscalationCountTolerance;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 EscalationTimeToleranceMS;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RPCRepeatLimitPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RPCRepeatLimitMSPerPeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RPCRepeatLimitTimePeriod;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CooloffTime;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AutoEscalateTime;
    
    ENGINE_API FRPCDoSState();
};

