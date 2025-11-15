#include "GameState.h"
#include "Net/UnrealNetwork.h"

AGameState::AGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MatchState = TEXT("EnteringMap");
    this->PreviousMatchState = TEXT("EnteringMap");
    this->ElapsedTime = 0;
}

void AGameState::OnRep_MatchState() {
}

void AGameState::OnRep_ElapsedTime() {
}

void AGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameState, MatchState);
    DOREPLIFETIME(AGameState, ElapsedTime);
}


