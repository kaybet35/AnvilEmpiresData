#include "ARFaceComponent.h"
#include "Net/UnrealNetwork.h"

UARFaceComponent::UARFaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformSetting = EARFaceTransformMixing::TrackingOnly;
    this->bUpdateVertexNormal = false;
    this->bFaceOutOfScreen = true;
}

void UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode) {
}

void UARFaceComponent::ServerUpdatePayload_Implementation(const FARFaceUpdatePayload& NewPayload) {
}
bool UARFaceComponent::ServerUpdatePayload_Validate(const FARFaceUpdatePayload& NewPayload) {
    return true;
}



void UARFaceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARFaceComponent, ReplicatedPayload);
}


