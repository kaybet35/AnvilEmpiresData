#include "CableActor.h"
#include "CableComponent.h"

ACableActor::ACableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent0"));
    this->CableComponent = (UCableComponent*)RootComponent;
}


