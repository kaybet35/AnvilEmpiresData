#include "WinConditionStateResponse.h"

FWinConditionStateResponse::FWinConditionStateResponse() {
    this->StateVersion = 0;
    this->FactionTotalNumCapturedKeeps[0] = 0;
    this->FactionTotalNumCapturedKeeps[1] = 0;
    this->FactionTotalNumCapturedKeeps[2] = 0;
    this->FactionTotalNumTemples[0] = 0;
    this->FactionTotalNumTemples[1] = 0;
    this->FactionTotalNumTemples[2] = 0;
    this->FactionTotalInfluence[0] = 0.00f;
    this->FactionTotalInfluence[1] = 0.00f;
    this->FactionTotalInfluence[2] = 0.00f;
    this->FactionTotalNumRelicSites[0] = 0;
    this->FactionTotalNumRelicSites[1] = 0;
    this->FactionTotalNumRelicSites[2] = 0;
    this->NumTotalRelicSites = 0;
    this->FactionUnixTimestampCultureVictoryStarted[0] = 0;
    this->FactionUnixTimestampCultureVictoryStarted[1] = 0;
    this->FactionUnixTimestampCultureVictoryStarted[2] = 0;
}

