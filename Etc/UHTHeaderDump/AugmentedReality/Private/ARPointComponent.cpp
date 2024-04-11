#include "ARPointComponent.h"
#include "Net/UnrealNetwork.h"

UARPointComponent::UARPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UARPointComponent::ServerUpdatePayload_Implementation(const FARPointUpdatePayload& NewPayload) {
}
bool UARPointComponent::ServerUpdatePayload_Validate(const FARPointUpdatePayload& NewPayload) {
    return true;
}



void UARPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARPointComponent, ReplicatedPayload);
}


