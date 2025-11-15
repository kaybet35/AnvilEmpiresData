#include "ReplaySubsystem.h"

UReplaySubsystem::UReplaySubsystem() {
    this->bLoadDefaultMapOnStop = true;
}

void UReplaySubsystem::RequestCheckpoint() {
}

bool UReplaySubsystem::IsRecording() const {
    return false;
}

bool UReplaySubsystem::IsPlaying() const {
    return false;
}

float UReplaySubsystem::GetReplayCurrentTime() const {
    return 0.0f;
}

FString UReplaySubsystem::GetActiveReplayName() const {
    return TEXT("");
}


