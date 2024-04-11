#include "InputTrigger.h"

UInputTrigger::UInputTrigger() {
    this->ActuationThreshold = 0.50f;
    this->bShouldAlwaysTick = false;
}

ETriggerState UInputTrigger::UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime) {
    return ETriggerState::None;
}

bool UInputTrigger::IsActuated(const FInputActionValue& ForValue) const {
    return false;
}

ETriggerType UInputTrigger::GetTriggerType_Implementation() const {
    return ETriggerType::Explicit;
}


