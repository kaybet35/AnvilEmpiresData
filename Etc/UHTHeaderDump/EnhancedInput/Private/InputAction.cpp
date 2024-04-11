#include "InputAction.h"

UInputAction::UInputAction() {
    this->bConsumeInput = true;
    this->bTriggerWhenPaused = false;
    this->bReserveAllMappings = false;
    this->ValueType = EInputActionValueType::Boolean;
}


