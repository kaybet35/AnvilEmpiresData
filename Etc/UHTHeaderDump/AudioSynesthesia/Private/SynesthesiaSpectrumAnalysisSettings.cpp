#include "SynesthesiaSpectrumAnalysisSettings.h"

USynesthesiaSpectrumAnalysisSettings::USynesthesiaSpectrumAnalysisSettings() {
    this->AnalysisPeriod = 0.01f;
    this->FFTSize = EFFTSize::DefaultSize;
    this->SpectrumType = EAudioSpectrumType::PowerSpectrum;
    this->WindowType = EFFTWindowType::Hann;
    this->bDownmixToMono = true;
}


