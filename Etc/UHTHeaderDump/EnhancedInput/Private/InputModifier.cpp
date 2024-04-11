#include "InputModifier.h"

UInputModifier::UInputModifier() {
}

FInputActionValue UInputModifier::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const {
    return FInputActionValue{};
}

FLinearColor UInputModifier::GetVisualizationColor_Implementation(FInputActionValue SampleValue, FInputActionValue FinalValue) const {
    return FLinearColor{};
}


