#include "WinConditionStateResponse.h"

FWinConditionStateResponse::FWinConditionStateResponse() {
    this->StateVersion = 0;
    this->FactionTotalNumCapturedKeeps[0] = 0;
    this->FactionTotalNumCapturedKeeps[1] = 0;
    this->FactionTotalNumCapturedKeeps[2] = 0;
    this->FactionTotalNumTemples[0] = 0;
    this->FactionTotalNumTemples[1] = 0;
    this->FactionTotalNumTemples[2] = 0;
    this->FactionUnixTimestampCultureVictoryStarted[0] = 0;
    this->FactionUnixTimestampCultureVictoryStarted[1] = 0;
    this->FactionUnixTimestampCultureVictoryStarted[2] = 0;
    this->NumCapturedKeepsForMilitaryVictory = 0;
    this->NumTemplesForCultureVictory = 0;
    this->CultureVictoryTimeRequiredSec = 0;
}

