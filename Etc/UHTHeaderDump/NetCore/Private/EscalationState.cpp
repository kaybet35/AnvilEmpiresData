#include "EscalationState.h"

FEscalationState::FEscalationState() {
    this->bLogEscalate = false;
    this->bDormant = false;
    this->CooloffTime = 0;
    this->AutoEscalateTime = 0;
    this->HighestTimePeriod = 0;
}

