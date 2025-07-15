#include "VisSiegeTowerAnimInstance.h"

UVisSiegeTowerAnimInstance::UVisSiegeTowerAnimInstance() {
    this->LadderState = EAnvilSiegeTowerState::Close;
    this->RampState = EAnvilSiegeTowerState::Close;
    this->CurrentRampAngle = 0.00f;
}


