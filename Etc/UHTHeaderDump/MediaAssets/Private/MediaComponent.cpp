#include "MediaComponent.h"

UMediaComponent::UMediaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MediaTexture = NULL;
    this->MediaPlayer = NULL;
}

UMediaTexture* UMediaComponent::GetMediaTexture() const {
    return NULL;
}

UMediaPlayer* UMediaComponent::GetMediaPlayer() const {
    return NULL;
}


