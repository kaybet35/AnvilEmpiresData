#include "LODActor.h"
#include "StaticMeshComponent.h"

ALODActor::ALODActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->Proxy = NULL;
    this->LODDrawDistance = 5000.00f;
    this->LODLevel = 0;
    this->CachedNumHLODLevels = 1;
}

void ALODActor::OnSubActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}


