#include "AREnvironmentProbeComponent.h"
#include "Net/UnrealNetwork.h"

UAREnvironmentProbeComponent::UAREnvironmentProbeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAREnvironmentProbeComponent::ServerUpdatePayload_Implementation(const FAREnvironmentProbeUpdatePayload& NewPayload) {
}
bool UAREnvironmentProbeComponent::ServerUpdatePayload_Validate(const FAREnvironmentProbeUpdatePayload& NewPayload) {
    return true;
}



void UAREnvironmentProbeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAREnvironmentProbeComponent, ReplicatedPayload);
}


