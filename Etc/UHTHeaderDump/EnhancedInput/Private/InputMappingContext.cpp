#include "InputMappingContext.h"

UInputMappingContext::UInputMappingContext() {
}

void UInputMappingContext::UnmapKey(const UInputAction* Action, FKey Key) {
}

void UInputMappingContext::UnmapAllKeysFromAction(const UInputAction* Action) {
}

void UInputMappingContext::UnmapAll() {
}

void UInputMappingContext::UnmapAction(const UInputAction* Action) {
}

FEnhancedActionKeyMapping UInputMappingContext::MapKey(const UInputAction* Action, FKey ToKey) {
    return FEnhancedActionKeyMapping{};
}


