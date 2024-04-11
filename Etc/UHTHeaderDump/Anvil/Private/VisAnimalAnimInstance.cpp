#include "VisAnimalAnimInstance.h"

UVisAnimalAnimInstance::UVisAnimalAnimInstance() {
    this->NativeSpeed = 0.00f;
    this->NativeCurrentState = EAnvilAnimalState::Idle;
    this->IsReceivingIncomingAttack = false;
}


