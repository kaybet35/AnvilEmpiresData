#include "MovieSceneScriptingEventChannel.h"

UMovieSceneScriptingEventChannel::UMovieSceneScriptingEventChannel() {
}

void UMovieSceneScriptingEventChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}


