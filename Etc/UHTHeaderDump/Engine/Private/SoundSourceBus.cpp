#include "SoundSourceBus.h"

USoundSourceBus::USoundSourceBus() {
    this->bLooping = true;
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->SourceBusChannels = ESourceBusChannels::Mono;
    this->SourceBusDuration = 0.00f;
    this->AudioBus = NULL;
    this->bAutoDeactivateWhenSilent = false;
}


