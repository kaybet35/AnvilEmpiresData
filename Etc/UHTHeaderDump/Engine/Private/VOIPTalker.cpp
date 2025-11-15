#include "VOIPTalker.h"

UVOIPTalker::UVOIPTalker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVOIPTalker::RegisterWithPlayerState(APlayerState* OwningState) {
}

float UVOIPTalker::GetVoiceLevel() {
    return 0.0f;
}

UVOIPTalker* UVOIPTalker::CreateTalkerForPlayer(APlayerState* OwningState) {
    return NULL;
}

void UVOIPTalker::BPOnTalkingEnd_Implementation() {
}

void UVOIPTalker::BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent) {
}


