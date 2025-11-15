#include "DefaultPawn.h"
#include "ESpawnActorCollisionHandlingMethod.h"
#include "FloatingPawnMovement.h"
#include "SphereComponent.h"
#include "StaticMeshComponent.h"

ADefaultPawn::ADefaultPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = false;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent0"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent0"));
    this->CollisionComponent = (USphereComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent0"));
    this->bAddDefaultMovementBindings = true;
    this->MeshComponent->SetupAttachment(RootComponent);
}

void ADefaultPawn::TurnAtRate(float Rate) {
}

void ADefaultPawn::MoveUp_World(float Val) {
}

void ADefaultPawn::MoveRight(float Val) {
}

void ADefaultPawn::MoveForward(float Val) {
}

void ADefaultPawn::LookUpAtRate(float Rate) {
}


