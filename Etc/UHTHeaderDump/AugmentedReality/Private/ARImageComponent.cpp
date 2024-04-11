#include "ARImageComponent.h"
#include "Net/UnrealNetwork.h"

UARImageComponent::UARImageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode) {
}

void UARImageComponent::ServerUpdatePayload_Implementation(const FARImageUpdatePayload& NewPayload) {
}
bool UARImageComponent::ServerUpdatePayload_Validate(const FARImageUpdatePayload& NewPayload) {
    return true;
}



void UARImageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARImageComponent, ReplicatedPayload);
}


