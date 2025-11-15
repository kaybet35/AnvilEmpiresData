#include "AmbientSound.h"
#include "AudioComponent.h"

AAmbientSound::AAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent0"));
    this->AudioComponent = (UAudioComponent*)RootComponent;
}

void AAmbientSound::Stop() {
}

void AAmbientSound::Play(float StartTime) {
}

void AAmbientSound::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
}

void AAmbientSound::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
}

void AAmbientSound::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
}


