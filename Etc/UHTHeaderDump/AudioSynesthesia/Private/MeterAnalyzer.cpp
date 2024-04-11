#include "MeterAnalyzer.h"
#include "MeterSettings.h"

UMeterAnalyzer::UMeterAnalyzer() {
    this->Settings = CreateDefaultSubobject<UMeterSettings>(TEXT("DefaultMeterSettings"));
}


