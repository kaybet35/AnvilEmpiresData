#include "SynesthesiaSpectrumAnalyzer.h"
#include "SynesthesiaSpectrumAnalysisSettings.h"

USynesthesiaSpectrumAnalyzer::USynesthesiaSpectrumAnalyzer() {
    this->Settings = CreateDefaultSubobject<USynesthesiaSpectrumAnalysisSettings>(TEXT("DefaultSynesthesiaSpectrumSettings"));
}

int32 USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies() const {
    return 0;
}

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(const float InSampleRate, TArray<float>& OutCenterFrequencies) {
}


