#include "EnhancedInputComponent.h"

UEnhancedInputComponent::UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FInputActionValue UEnhancedInputComponent::GetBoundActionValue(const UInputAction* Action) const {
    return FInputActionValue{};
}


