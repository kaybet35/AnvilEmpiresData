#include "NetFaultState.h"

FNetFaultState::FNetFaultState() {
    this->bCloseConnection = false;
    this->EscalateQuotaFaultsPerPeriod = 0;
    this->EscalateQuotaFaultPercentPerPeriod = 0;
    this->DescalateQuotaFaultsPerPeriod = 0;
    this->DescalateQuotaFaultPercentPerPeriod = 0;
    this->EscalateQuotaTimePeriod = 0;
}

