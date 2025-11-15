#include "PlayerState.h"
#include "EngineMessage.h"
#include "Net/UnrealNetwork.h"

APlayerState::APlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Score = 0.00f;
    this->PlayerId = 0;
    this->CompressedPing = 0;
    this->bShouldUpdateReplicatedPing = true;
    this->bIsSpectator = false;
    this->bOnlySpectator = false;
    this->bIsABot = false;
    this->bIsInactive = false;
    this->bFromPreviousLevel = false;
    this->StartTime = 0;
    this->EngineMessageClass = UEngineMessage::StaticClass();
    this->PawnPrivate = NULL;
}



void APlayerState::OnRep_UniqueId() {
}

void APlayerState::OnRep_Score() {
}

void APlayerState::OnRep_PlayerName() {
}

void APlayerState::OnRep_PlayerId() {
}

void APlayerState::OnRep_bIsInactive() {
}

void APlayerState::OnPawnPrivateDestroyed(AActor* InActor) {
}

bool APlayerState::IsSpectator() const {
    return false;
}

bool APlayerState::IsOnlyASpectator() const {
    return false;
}

bool APlayerState::IsABot() const {
    return false;
}

float APlayerState::GetScore() const {
    return 0.0f;
}

FString APlayerState::GetPlayerName() const {
    return TEXT("");
}

int32 APlayerState::GetPlayerId() const {
    return 0;
}

APlayerController* APlayerState::GetPlayerController() const {
    return NULL;
}

float APlayerState::GetPingInMilliseconds() const {
    return 0.0f;
}

APawn* APlayerState::GetPawn() const {
    return NULL;
}

uint8 APlayerState::GetCompressedPing() const {
    return 0;
}

FUniqueNetIdRepl APlayerState::BP_GetUniqueId() const {
    return FUniqueNetIdRepl{};
}

void APlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerState, Score);
    DOREPLIFETIME(APlayerState, PlayerId);
    DOREPLIFETIME(APlayerState, CompressedPing);
    DOREPLIFETIME(APlayerState, bIsSpectator);
    DOREPLIFETIME(APlayerState, bOnlySpectator);
    DOREPLIFETIME(APlayerState, bIsABot);
    DOREPLIFETIME(APlayerState, bIsInactive);
    DOREPLIFETIME(APlayerState, bFromPreviousLevel);
    DOREPLIFETIME(APlayerState, StartTime);
    DOREPLIFETIME(APlayerState, UniqueId);
    DOREPLIFETIME(APlayerState, PlayerNamePrivate);
}


