#include "MovieSceneScriptingIntegerChannel.h"

UMovieSceneScriptingIntegerChannel::UMovieSceneScriptingIntegerChannel() {
}

void UMovieSceneScriptingIntegerChannel::SetDefault(int32 InDefaultValue) {
}

void UMovieSceneScriptingIntegerChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingIntegerChannel::RemoveDefault() {
}

bool UMovieSceneScriptingIntegerChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

int32 UMovieSceneScriptingIntegerChannel::GetDefault() const {
    return 0;
}

UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const FFrameNumber& InTime, int32 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}


