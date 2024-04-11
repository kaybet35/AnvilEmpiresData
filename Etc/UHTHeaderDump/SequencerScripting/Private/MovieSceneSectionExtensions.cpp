#include "MovieSceneSectionExtensions.h"
#include "Templates/SubclassOf.h"

UMovieSceneSectionExtensions::UMovieSceneSectionExtensions() {
}

void UMovieSceneSectionExtensions::SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime) {
}

void UMovieSceneSectionExtensions::SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded) {
}

void UMovieSceneSectionExtensions::SetStartFrame(UMovieSceneSection* Section, int32 StartFrame) {
}

void UMovieSceneSectionExtensions::SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime) {
}

void UMovieSceneSectionExtensions::SetRange(UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame) {
}

void UMovieSceneSectionExtensions::SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime) {
}

void UMovieSceneSectionExtensions::SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded) {
}

void UMovieSceneSectionExtensions::SetEndFrame(UMovieSceneSection* Section, int32 EndFrame) {
}

bool UMovieSceneSectionExtensions::HasStartFrame(UMovieSceneSection* Section) {
    return false;
}

bool UMovieSceneSectionExtensions::HasEndFrame(UMovieSceneSection* Section) {
    return false;
}

float UMovieSceneSectionExtensions::GetStartFrameSeconds(UMovieSceneSection* Section) {
    return 0.0f;
}

int32 UMovieSceneSectionExtensions::GetStartFrame(UMovieSceneSection* Section) {
    return 0;
}

int32 UMovieSceneSectionExtensions::GetParentSequenceFrame(UMovieSceneSubSection* Section, int32 InFrame, UMovieSceneSequence* ParentSequence) {
    return 0;
}

float UMovieSceneSectionExtensions::GetEndFrameSeconds(UMovieSceneSection* Section) {
    return 0.0f;
}

int32 UMovieSceneSectionExtensions::GetEndFrame(UMovieSceneSection* Section) {
    return 0;
}

TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannelsByType(UMovieSceneSection* Section, TSubclassOf<UMovieSceneScriptingChannel> ChannelType) {
    return TArray<UMovieSceneScriptingChannel*>();
}

TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels(UMovieSceneSection* Section) {
    return TArray<UMovieSceneScriptingChannel*>();
}

float UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(UMovieSceneSection* Section) {
    return 0.0f;
}

int32 UMovieSceneSectionExtensions::GetAutoSizeStartFrame(UMovieSceneSection* Section) {
    return 0;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(UMovieSceneSection* Section) {
    return false;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(UMovieSceneSection* Section) {
    return false;
}

float UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(UMovieSceneSection* Section) {
    return 0.0f;
}

int32 UMovieSceneSectionExtensions::GetAutoSizeEndFrame(UMovieSceneSection* Section) {
    return 0;
}

TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetAllChannels(UMovieSceneSection* Section) {
    return TArray<UMovieSceneScriptingChannel*>();
}

TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType(UMovieSceneSection* Section, TSubclassOf<UMovieSceneScriptingChannel> ChannelType) {
    return TArray<UMovieSceneScriptingChannel*>();
}


