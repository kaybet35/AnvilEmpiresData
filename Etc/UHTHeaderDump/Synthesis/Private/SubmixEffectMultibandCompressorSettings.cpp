#include "SubmixEffectMultibandCompressorSettings.h"

FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings() {
    this->DynamicsProcessorType = ESubmixEffectDynamicsProcessorType::Compressor;
    this->PeakMode = ESubmixEffectDynamicsPeakMode::MeanSquared;
    this->LinkMode = ESubmixEffectDynamicsChannelLinkMode::Disabled;
    this->LookAheadMsec = 0.00f;
    this->bAnalogMode = false;
    this->bFourPole = false;
    this->bBypass = false;
    this->KeySource = ESubmixEffectDynamicsKeySource::Default;
    this->ExternalAudioBus = NULL;
    this->ExternalSubmix = NULL;
    this->KeyGainDb = 0.00f;
    this->bKeyAudition = false;
}

