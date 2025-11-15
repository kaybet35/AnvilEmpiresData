#include "Emitter.h"
#include "Net/UnrealNetwork.h"
#include "ParticleSystemComponent.h"

AEmitter::AEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"));
    this->ParticleSystemComponent = (UParticleSystemComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
    this->bPostUpdateTickGroup = false;
    this->bCurrentlyActive = false;
}

void AEmitter::ToggleActive() {
}

void AEmitter::SetVectorParameter(FName ParameterName, FVector Param) {
}

void AEmitter::SetTemplate(UParticleSystem* NewTemplate) {
}

void AEmitter::SetMaterialParameter(FName ParameterName, UMaterialInterface* Param) {
}

void AEmitter::SetFloatParameter(FName ParameterName, float Param) {
}

void AEmitter::SetColorParameter(FName ParameterName, FLinearColor Param) {
}

void AEmitter::SetActorParameter(FName ParameterName, AActor* Param) {
}

void AEmitter::OnRep_bCurrentlyActive() {
}

void AEmitter::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
}

bool AEmitter::IsActive() const {
    return false;
}

void AEmitter::Deactivate() {
}

void AEmitter::Activate() {
}

void AEmitter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmitter, bCurrentlyActive);
}


