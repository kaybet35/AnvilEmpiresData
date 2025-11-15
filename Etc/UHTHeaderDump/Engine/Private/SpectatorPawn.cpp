#include "SpectatorPawn.h"
#include "SpectatorPawnMovement.h"

ASpectatorPawn::ASpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USpectatorPawnMovement>(TEXT("MovementComponent0"))) {
    const FProperty* p_MeshComponent = GetClass()->FindPropertyByName("MeshComponent");
    (*p_MeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = NULL;
}


