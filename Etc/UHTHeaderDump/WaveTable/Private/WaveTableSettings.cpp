#include "WaveTableSettings.h"

FWaveTableSettings::FWaveTableSettings() {
    this->ChannelIndex = 0;
    this->Phase = 0.00f;
    this->Top = 0.00f;
    this->Tail = 0.00f;
    this->FadeIn = 0.00f;
    this->FadeOut = 0.00f;
    this->bNormalize = false;
    this->bRemoveOffset = false;
}

