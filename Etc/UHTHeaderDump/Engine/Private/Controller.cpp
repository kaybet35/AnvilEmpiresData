#include "Controller.h"
#include "Net/UnrealNetwork.h"
#include "SceneComponent.h"

AController::AController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->PlayerState = NULL;
    this->Pawn = NULL;
    this->Character = NULL;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->bAttachToPawn = false;
}

void AController::UnPossess() {
}

void AController::StopMovement() {
}

void AController::SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation) {
}

void AController::SetIgnoreMoveInput(bool bNewMoveInput) {
}

void AController::SetIgnoreLookInput(bool bNewLookInput) {
}

void AController::SetControlRotation(const FRotator& NewRotation) {
}

void AController::ResetIgnoreMoveInput() {
}

void AController::ResetIgnoreLookInput() {
}

void AController::ResetIgnoreInputFlags() {
}




void AController::Possess(APawn* InPawn) {
}

void AController::OnRep_PlayerState() {
}

void AController::OnRep_Pawn() {
}

bool AController::LineOfSightTo(const AActor* Other, FVector ViewPoint, bool bAlternateChecks) const {
    return false;
}

APawn* AController::K2_GetPawn() const {
    return NULL;
}

bool AController::IsPlayerController() const {
    return false;
}

bool AController::IsMoveInputIgnored() const {
    return false;
}

bool AController::IsLookInputIgnored() const {
    return false;
}

bool AController::IsLocalPlayerController() const {
    return false;
}

bool AController::IsLocalController() const {
    return false;
}

AActor* AController::GetViewTarget() const {
    return NULL;
}

void AController::GetPlayerViewPoint(FVector& Location, FRotator& Rotation) const {
}

FRotator AController::GetDesiredRotation() const {
    return FRotator{};
}

FRotator AController::GetControlRotation() const {
    return FRotator{};
}

void AController::ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera) {
}
bool AController::ClientSetRotation_Validate(FRotator NewRotation, bool bResetCamera) {
    return true;
}

void AController::ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation) {
}
bool AController::ClientSetLocation_Validate(FVector NewLocation, FRotator NewRotation) {
    return true;
}

void AController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AController, PlayerState);
    DOREPLIFETIME(AController, Pawn);
}


