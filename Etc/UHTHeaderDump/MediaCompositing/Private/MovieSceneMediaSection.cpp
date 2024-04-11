#include "MovieSceneMediaSection.h"

UMovieSceneMediaSection::UMovieSceneMediaSection() {
    this->MediaSource = NULL;
    this->bLooping = true;
    this->MediaTexture = NULL;
    this->MediaSoundComponent = NULL;
    this->bUseExternalMediaPlayer = false;
    this->ExternalMediaPlayer = NULL;
    this->bHasMediaPlayerProxy = false;
}


