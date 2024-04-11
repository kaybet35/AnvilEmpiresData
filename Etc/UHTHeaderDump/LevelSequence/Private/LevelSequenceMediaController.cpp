#include "LevelSequenceMediaController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaComponent -FallbackName=MediaComponent
#include "Net/UnrealNetwork.h"

ALevelSequenceMediaController::ALevelSequenceMediaController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Sequence = NULL;
    this->MediaComponent = CreateDefaultSubobject<UMediaComponent>(TEXT("MediaComponent"));
    this->ServerStartTimeSeconds = -0.00f;
}

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds) {
}

void ALevelSequenceMediaController::Play() {
}

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds() {
}

ALevelSequenceActor* ALevelSequenceMediaController::GetSequence() const {
    return NULL;
}

UMediaComponent* ALevelSequenceMediaController::GetMediaComponent() const {
    return NULL;
}

void ALevelSequenceMediaController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelSequenceMediaController, ServerStartTimeSeconds);
}


