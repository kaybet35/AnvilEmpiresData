#include "ARGeoAnchorComponent.h"
#include "Net/UnrealNetwork.h"

UARGeoAnchorComponent::UARGeoAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode) {
}

void UARGeoAnchorComponent::ServerUpdatePayload_Implementation(const FARGeoAnchorUpdatePayload& NewPayload) {
}
bool UARGeoAnchorComponent::ServerUpdatePayload_Validate(const FARGeoAnchorUpdatePayload& NewPayload) {
    return true;
}



void UARGeoAnchorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARGeoAnchorComponent, ReplicatedPayload);
}


