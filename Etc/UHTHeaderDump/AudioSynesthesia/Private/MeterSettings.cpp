#include "MeterSettings.h"

UMeterSettings::UMeterSettings() {
    this->AnalysisPeriod = 0.01f;
    this->PeakMode = EMeterPeakType::RootMeanSquared;
    this->MeterAttackTime = 300;
    this->MeterReleaseTime = 300;
    this->PeakHoldTime = 100;
    this->ClippingThreshold = 1.00f;
}


