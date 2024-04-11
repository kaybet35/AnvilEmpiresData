#include "LoudnessAnalyzer.h"
#include "LoudnessSettings.h"

ULoudnessAnalyzer::ULoudnessAnalyzer() {
    this->Settings = CreateDefaultSubobject<ULoudnessSettings>(TEXT("DefaultLoudnessSettings"));
}


