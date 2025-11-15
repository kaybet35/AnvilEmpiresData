#include "PhysicsThruster.h"
#include "PhysicsThrusterComponent.h"

APhysicsThruster::APhysicsThruster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("Thruster0"));
    this->ThrusterComponent = (UPhysicsThrusterComponent*)RootComponent;
}


