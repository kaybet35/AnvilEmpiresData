#include "ActorSequenceComponent.h"
#include "ActorSequence.h"

UActorSequenceComponent::UActorSequenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sequence = CreateDefaultSubobject<UActorSequence>(TEXT("Sequence"));
    this->SequencePlayer = NULL;
}

void UActorSequenceComponent::StopSequence() {
}

void UActorSequenceComponent::PlaySequence() {
}

void UActorSequenceComponent::PauseSequence() {
}


