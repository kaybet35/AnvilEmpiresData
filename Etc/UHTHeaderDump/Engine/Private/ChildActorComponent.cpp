#include "ChildActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UChildActorComponent::UChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChildActorClass = NULL;
    this->ChildActor = NULL;
    this->ChildActorTemplate = NULL;
}

void UChildActorComponent::SetChildActorClass(TSubclassOf<AActor> InClass) {
}

void UChildActorComponent::OnChildActorDestroyed(AActor* DestroyedActor) {
}

void UChildActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChildActorComponent, ChildActor);
}


