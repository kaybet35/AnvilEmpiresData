#include "SoundConcurrencySettings.h"

FSoundConcurrencySettings::FSoundConcurrencySettings() {
    this->MaxCount = 0;
    this->bLimitToOwner = false;
    this->bVolumeScaleCanRelease = false;
    this->ResolutionRule = EMaxConcurrentResolutionRule::PreventNew;
    this->RetriggerTime = 0.00f;
    this->VolumeScale = 0.00f;
    this->VolumeScaleMode = EConcurrencyVolumeScaleMode::Default;
    this->VolumeScaleAttackTime = 0.00f;
    this->VolumeScaleReleaseTime = 0.00f;
    this->VoiceStealReleaseTime = 0.00f;
}

