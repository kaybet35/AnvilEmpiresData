#include "AudioAnalyzer.h"

UAudioAnalyzer::UAudioAnalyzer() {
    this->AudioBus = NULL;
    this->AudioAnalyzerSubsystem = NULL;
}

void UAudioAnalyzer::StopAnalyzing(const UObject* WorldContextObject) {
}

void UAudioAnalyzer::StartAnalyzing(const UObject* WorldContextObject, UAudioBus* AudioBusToAnalyze) {
}


