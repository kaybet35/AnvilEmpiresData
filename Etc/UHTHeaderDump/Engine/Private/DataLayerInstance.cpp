#include "DataLayerInstance.h"

UDataLayerInstance::UDataLayerInstance() {
    this->InitialRuntimeState = EDataLayerRuntimeState::Unloaded;
    this->Parent = NULL;
}

bool UDataLayerInstance::IsVisible() const {
    return false;
}

bool UDataLayerInstance::IsRuntime() const {
    return false;
}

bool UDataLayerInstance::IsInitiallyVisible() const {
    return false;
}

bool UDataLayerInstance::IsEffectiveVisible() const {
    return false;
}

EDataLayerType UDataLayerInstance::GetType() const {
    return EDataLayerType::Runtime;
}

EDataLayerRuntimeState UDataLayerInstance::GetInitialRuntimeState() const {
    return EDataLayerRuntimeState::Unloaded;
}

FColor UDataLayerInstance::GetDebugColor() const {
    return FColor{};
}


