#include "AudioOutputDeviceInfo.h"

FAudioOutputDeviceInfo::FAudioOutputDeviceInfo() {
    this->NumChannels = 0;
    this->SampleRate = 0;
    this->Format = EAudioMixerStreamDataFormatType::Unknown;
    this->bIsSystemDefault = false;
    this->bIsCurrentDevice = false;
}

