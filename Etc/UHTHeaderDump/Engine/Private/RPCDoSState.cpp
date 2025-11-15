#include "RPCDoSState.h"

FRPCDoSState::FRPCDoSState() {
    this->bLogEscalate = false;
    this->bSendEscalateAnalytics = false;
    this->bKickPlayer = false;
    this->bTrackRecentRPCs = false;
    this->EscalateQuotaRPCsPerFrame = 0;
    this->EscalateTimeQuotaMSPerFrame = 0;
    this->EscalateQuotaRPCsPerPeriod = 0;
    this->EscalateTimeQuotaMSPerPeriod = 0;
    this->EscalateQuotaTimePeriod = 0;
    this->EscalationCountTolerance = 0;
    this->EscalationTimeToleranceMS = 0;
    this->RPCRepeatLimitPerPeriod = 0;
    this->RPCRepeatLimitMSPerPeriod = 0;
    this->RPCRepeatLimitTimePeriod = 0;
    this->CooloffTime = 0;
    this->AutoEscalateTime = 0;
}

