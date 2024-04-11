#include "GateDataComponent.h"

UGateDataComponent::UGateDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpenCloseState = EAnvilGateState::Closed;
}


