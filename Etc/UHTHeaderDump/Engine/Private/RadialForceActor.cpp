#include "RadialForceActor.h"
#include "RadialForceComponent.h"

ARadialForceActor::ARadialForceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("ForceComponent0"));
    this->ForceComponent = (URadialForceComponent*)RootComponent;
}

void ARadialForceActor::ToggleForce() {
}

void ARadialForceActor::FireImpulse() {
}

void ARadialForceActor::EnableForce() {
}

void ARadialForceActor::DisableForce() {
}


