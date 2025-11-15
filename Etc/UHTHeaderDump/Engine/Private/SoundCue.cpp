#include "SoundCue.h"

USoundCue::USoundCue() {
    this->FirstNode = NULL;
    this->VolumeMultiplier = 0.75f;
    this->PitchMultiplier = 1.00f;
    this->SubtitlePriority = 10000.00f;
    this->bPrimeOnLoad = false;
    this->bOverrideAttenuation = false;
    this->bExcludeFromRandomNodeBranchCulling = false;
    this->bHasPlayWhenSilent = false;
    this->CookedQualityIndex = -1;
}


