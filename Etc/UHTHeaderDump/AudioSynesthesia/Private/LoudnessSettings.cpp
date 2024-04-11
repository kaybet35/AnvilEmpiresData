#include "LoudnessSettings.h"

ULoudnessSettings::ULoudnessSettings() {
    this->AnalysisPeriod = 0.01f;
    this->MinimumFrequency = 20.00f;
    this->MaximumFrequency = 20000.00f;
    this->CurveType = ELoudnessCurveTypeEnum::D;
    this->NoiseFloorDb = -60.00f;
    this->ExpectedMaxLoudness = 0.00f;
}


