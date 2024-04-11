#include "AudioInputDeviceInfo.h"

FAudioInputDeviceInfo::FAudioInputDeviceInfo() {
    this->InputChannels = 0;
    this->PreferredSampleRate = 0;
    this->bSupportsHardwareAEC = false;
}

