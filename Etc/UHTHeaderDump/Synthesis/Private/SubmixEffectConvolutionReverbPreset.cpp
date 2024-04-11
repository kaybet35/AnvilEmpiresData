#include "SubmixEffectConvolutionReverbPreset.h"

USubmixEffectConvolutionReverbPreset::USubmixEffectConvolutionReverbPreset() {
    this->ImpulseResponse = NULL;
    this->BlockSize = ESubmixEffectConvolutionReverbBlockSize::BlockSize1024;
    this->bEnableHardwareAcceleration = true;
}

void USubmixEffectConvolutionReverbPreset::SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings) {
}

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse) {
}


