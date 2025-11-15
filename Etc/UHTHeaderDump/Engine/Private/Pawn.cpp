#include "Pawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "ESpawnActorCollisionHandlingMethod.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

APawn::APawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->bUseControllerRotationPitch = false;
    this->bUseControllerRotationYaw = false;
    this->bUseControllerRotationRoll = false;
    this->bCanAffectNavigationGeneration = false;
    this->bIsLocalViewTarget = false;
    this->BaseEyeHeight = 64.00f;
    this->AutoPossessPlayer = EAutoReceiveInput::Disabled;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorld;
    this->RemoteViewPitch = 0;
    this->AIControllerClass = AAIController::StaticClass();
    this->PlayerState = NULL;
    this->LastHitBy = NULL;
    this->Controller = NULL;
    this->PreviousController = NULL;
    this->OverrideInputComponentClass = NULL;
}

void APawn::SpawnDefaultController() {
}

void APawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
}





void APawn::PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker) {
}

void APawn::OnRep_PlayerState() {
}

void APawn::OnRep_Controller() {
}

bool APawn::IsPlayerControlled() const {
    return false;
}

bool APawn::IsPawnControlled() const {
    return false;
}

bool APawn::IsMoveInputIgnored() const {
    return false;
}

bool APawn::IsLocallyViewed() const {
    return false;
}

bool APawn::IsLocallyControlled() const {
    return false;
}

bool APawn::IsControlled() const {
    return false;
}

bool APawn::IsBotControlled() const {
    return false;
}

FVector APawn::GetPendingMovementInputVector() const {
    return FVector{};
}

TSubclassOf<UInputComponent> APawn::GetOverrideInputComponentClass() const {
    return NULL;
}

FVector APawn::GetNavAgentLocation() const {
    return FVector{};
}

UPawnMovementComponent* APawn::GetMovementComponent() const {
    return NULL;
}

AActor* APawn::GetMovementBaseActor(const APawn* Pawn) {
    return NULL;
}

APlayerController* APawn::GetLocalViewingPlayerController() const {
    return NULL;
}

FVector APawn::GetLastMovementInputVector() const {
    return FVector{};
}

FRotator APawn::GetControlRotation() const {
    return FRotator{};
}

AController* APawn::GetController() const {
    return NULL;
}

FRotator APawn::GetBaseAimRotation() const {
    return FRotator{};
}

void APawn::DetachFromControllerPendingDestroy() {
}

FVector APawn::ConsumeMovementInputVector() {
    return FVector{};
}

void APawn::AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce) {
}

void APawn::AddControllerYawInput(float Val) {
}

void APawn::AddControllerRollInput(float Val) {
}

void APawn::AddControllerPitchInput(float Val) {
}

void APawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APawn, RemoteViewPitch);
    DOREPLIFETIME(APawn, PlayerState);
    DOREPLIFETIME(APawn, Controller);
}


