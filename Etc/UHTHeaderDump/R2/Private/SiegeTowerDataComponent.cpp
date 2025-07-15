#include "SiegeTowerDataComponent.h"

USiegeTowerDataComponent::USiegeTowerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RampState = EAnvilSiegeTowerState::Close;
    this->LadderState = EAnvilSiegeTowerState::Close;
    this->CurrentRampAngle = 0.00f;
}


