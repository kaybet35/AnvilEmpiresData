#include "InputActionInstance.h"

FInputActionInstance::FInputActionInstance() {
    this->SourceAction = NULL;
    this->TriggerEvent = ETriggerEvent::None;
    this->LastTriggeredWorldTime = 0.00f;
    this->ElapsedProcessedTime = 0.00f;
    this->ElapsedTriggeredTime = 0.00f;
}

