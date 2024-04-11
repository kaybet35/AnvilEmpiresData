#include "EnhancedInputLibrary.h"

UEnhancedInputLibrary::UEnhancedInputLibrary() {
}

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(const UInputMappingContext* Context, bool bForceImmediately) {
}

FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType) {
    return FInputActionValue{};
}

FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, const FInputActionValue& MatchValueType) {
    return FInputActionValue{};
}

FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(AActor* Actor, const UInputAction* Action) {
    return FInputActionValue{};
}

FString UEnhancedInputLibrary::Conv_InputActionValueToString(FInputActionValue ActionValue) {
    return TEXT("");
}

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(FInputActionValue InValue) {
    return false;
}

FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(FInputActionValue ActionValue) {
    return FVector{};
}

FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(FInputActionValue InValue) {
    return FVector2D{};
}

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(FInputActionValue InValue) {
    return 0.0;
}

void UEnhancedInputLibrary::BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type) {
}


